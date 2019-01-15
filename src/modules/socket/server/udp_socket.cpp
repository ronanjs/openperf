#include <cstring>
#include <numeric>
#include <optional>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/uio.h>

#include "socket/server/udp_socket.h"
#include "lwip/memp.h"
#include "lwip/udp.h"

namespace icp {
namespace socket {
namespace server {

const char * to_string(const udp_socket_state& state)
{
    return (std::visit(overloaded_visitor(
                           [](const udp_init&) -> const char* {
                               return ("init");
                           },
                           [](const udp_bound&) -> const char* {
                               return ("bound");
                           },
                           [](const udp_connected&) -> const char* {
                               return ("connected");
                           },
                           [](const udp_bound_and_connected&) -> const char* {
                               return ("bound_and_connected");
                           },
                           [](const udp_closed&) -> const char * {
                               return ("closed");
                           }),
                       state));
}

void udp_socket::udp_pcb_deleter::operator()(udp_pcb *pcb)
{
    udp_remove(pcb);
}

void udp_receive(void* arg, udp_pcb* pcb, pbuf* p, const ip_addr_t* addr, in_port_t port)
{
    (void)pcb;
    assert(addr != nullptr);
    auto channel = reinterpret_cast<dgram_channel*>(arg);
    if (!channel->send(p, reinterpret_cast<const dgram_ip_addr*>(addr), port)) {
        pbuf_free(p);
    }
}

udp_socket::udp_socket(icp::memory::allocator::pool& pool, pid_t pid)
    : m_channel(new (pool.acquire()) dgram_channel(), dgram_channel_deleter(&pool))
    , m_pcb(udp_new())
    , m_pid(pid)
{
    if (!m_pcb) {
        throw std::runtime_error("Out of UDP pcb's!");
    }

    udp_recv(m_pcb.get(), &udp_receive, m_channel.get());
}

channel_variant udp_socket::channel() const
{
    return (m_channel.get());
}

tl::expected<generic_socket, int> udp_socket::handle_accept()
{
    /* Can't accept on a UDP socket */
    return (tl::make_unexpected(EOPNOTSUPP));
}

void udp_socket::handle_transmit()
{
    m_channel->ack();
    std::array<dgram_channel_item, api::socket_queue_length> items;
    auto nb_items = m_channel->recv(items.data(), items.size());
    for (size_t idx = 0; idx < nb_items; idx++) {
        auto& [dest, data] = items[idx];
        if (dest) udp_sendto(m_pcb.get(), const_cast<pbuf*>(data.pbuf()),
                             reinterpret_cast<const ip_addr_t*>(&dest->addr()), dest->port());
        else      udp_send(m_pcb.get(), const_cast<pbuf*>(data.pbuf()));
    }
}

static tl::expected<void, int> do_udp_bind(udp_pcb* pcb, const api::request_bind& bind)
{
    sockaddr_storage sstorage;

    auto copy_result = copy_in(sstorage, bind.id.pid, bind.name, bind.namelen);
    if (!copy_result) {
        return (tl::make_unexpected(copy_result.error()));
    }

    auto ip_addr = get_address(sstorage);
    auto ip_port = get_port(sstorage);

    if (!ip_addr || !ip_port) {
        return (tl::make_unexpected(EINVAL));
    }

    auto error = udp_bind(pcb, &*ip_addr, *ip_port);
    if (error != ERR_OK) {
        return (tl::make_unexpected(err_to_errno(error)));
    }

    return {};
}

/* provide udp_disconnect a return type so that it's less cumbersome to use */
static err_t do_udp_disconnect(udp_pcb* pcb)
{
    udp_disconnect(pcb);
    return (ERR_OK);
}

static tl::expected<bool, int> do_udp_connect(udp_pcb* pcb, const api::request_connect& connect)
{
    sockaddr_storage sstorage;

    auto copy_result = copy_in(sstorage, connect.id.pid, connect.name, connect.namelen);
    if (!copy_result) {
        return (tl::make_unexpected(copy_result.error()));
    }

    auto ip_addr = get_address(sstorage);
    auto ip_port = get_port(sstorage);

    if (!ip_addr || !ip_port) {
        return (tl::make_unexpected(EINVAL));
    }

    /* connection-less sockets allow both connects and disconnects */
    auto error = (IP_IS_ANY_TYPE_VAL(*ip_addr)
                  ? do_udp_disconnect(pcb)
                  : udp_connect(pcb, &*ip_addr, *ip_port));
    if (error != ERR_OK) {
        return (tl::make_unexpected(err_to_errno(error)));
    }

    return (!IP_IS_ANY_TYPE_VAL(*ip_addr));
}

template <typename NameRequest>
static tl::expected<socklen_t, int> do_udp_get_name(const ip_addr_t& ip_addr,
                                                    const in_port_t& ip_port,
                                                    const NameRequest& request)
{
    struct sockaddr_storage sstorage;
    socklen_t slength = 0;

    switch (IP_GET_TYPE(&ip_addr)) {
    case IPADDR_TYPE_V4: {
        struct sockaddr_in *sa4 = reinterpret_cast<sockaddr_in*>(&sstorage);
        sa4->sin_family = AF_INET;
        sa4->sin_port = htons(ip_port);
        sa4->sin_addr.s_addr = ip_2_ip4(&ip_addr)->addr;

        slength = sizeof(sockaddr_in);
        break;
    }
    case IPADDR_TYPE_V6: {
        struct sockaddr_in6 *sa6 = reinterpret_cast<sockaddr_in6*>(&sstorage);
        sa6->sin6_family = AF_INET6;
        sa6->sin6_port = htons(ip_port);
        std::memcpy(sa6->sin6_addr.s6_addr,
                    ip_2_ip6(&ip_addr)->addr,
                    sizeof(in6_addr));

        slength = sizeof(sockaddr_in6);
        break;
    }
    default:
        throw std::logic_error("Fix me!");
    }

    /* Copy the data out */
    auto result = copy_out(request.id.pid, request.name,
                           sstorage, std::min(request.namelen, slength));
    if (!result) {
        return (tl::make_unexpected(result.error()));
    }

    return (slength);
}

tl::expected<socklen_t, int> udp_socket::do_udp_getsockopt(udp_pcb* pcb,
                                                           const api::request_getsockopt& getsockopt)
{
    socklen_t slength = 0;
    switch (getsockopt.optname) {
    case SO_BROADCAST: {
        int opt = !!ip_get_option(pcb, SOF_BROADCAST);
        auto result = copy_out(getsockopt.id.pid, getsockopt.optval, opt);
        if (!result) return (tl::make_unexpected(result.error()));
        slength = sizeof(opt);
        break;
    }
    case SO_REUSEADDR: {
        int opt = !!ip_get_option(pcb, SOF_REUSEADDR);
        auto result = copy_out(getsockopt.id.pid, getsockopt.optval, opt);
        if (!result) return (tl::make_unexpected(result.error()));
        slength = sizeof(opt);
        break;
    }
    default:
        return (tl::make_unexpected(ENOPROTOOPT));
    }

    return (slength);
}

tl::expected<void, int> udp_socket::do_udp_setsockopt(udp_pcb* pcb,
                                                      const api::request_setsockopt& setsockopt)
{
    switch (setsockopt.optname) {
    case SO_BROADCAST: {
        auto opt = copy_in(setsockopt.id.pid,
                           reinterpret_cast<const int*>(setsockopt.optval));
        if (!opt) return (tl::make_unexpected(opt.error()));
        if (*opt) ip_set_option(pcb, SOF_BROADCAST);
        else      ip_reset_option(pcb, SOF_BROADCAST);
        break;
    }
    case SO_REUSEADDR: {
        auto opt = copy_in(setsockopt.id.pid,
                           reinterpret_cast<const int*>(setsockopt.optval));
        if (!opt) return (tl::make_unexpected(opt.error()));
        if (*opt) ip_set_option(pcb, SOF_REUSEADDR);
        else      ip_reset_option(pcb, SOF_REUSEADDR);
        break;
    }
    default:
        return (tl::make_unexpected(ENOPROTOOPT));
    }

    return {};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_bind& bind,
                                                    const udp_init&)
{
    auto result = do_udp_bind(m_pcb.get(), bind);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    return {api::reply_success(), udp_bound()};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_bind& bind,
                                                    const udp_connected&)
{
    auto result = do_udp_bind(m_pcb.get(), bind);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    return {api::reply_success(), udp_bound_and_connected()};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_connect& connect,
                                                    const udp_init&)
{
    auto result = do_udp_connect(m_pcb.get(), connect);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    if (!*result) return {api::reply_success(), std::nullopt};  /* still not connected */
    return {api::reply_success(), udp_connected()};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_connect& connect,
                                                    const udp_bound&)
{
    auto result = do_udp_connect(m_pcb.get(), connect);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    if (!*result) return {api::reply_success(), std::nullopt};  /* still not connected */
    return {api::reply_success(), udp_bound_and_connected()};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_connect& connect,
                                                    const udp_connected&)
{
    auto result = do_udp_connect(m_pcb.get(), connect);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    if (!*result) return {api::reply_success(), udp_init()}; /* disconnected */
    return {api::reply_success(), std::nullopt};  /* still connected */
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_connect& connect,
                                                    const udp_bound_and_connected&)
{
    auto result = do_udp_connect(m_pcb.get(), connect);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    if (!*result) return {api::reply_success(), udp_bound()}; /* disconnected */
    return {api::reply_success(), udp_bound_and_connected()};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_getpeername& getpeername,
                                                    const udp_connected&)
{
    auto result = do_udp_get_name(m_pcb->remote_ip, m_pcb->remote_port,
                                  getpeername);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    return {api::reply_socklen{*result}, std::nullopt};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_getpeername& getpeername,
                                                    const udp_bound_and_connected&)
{
    auto result = do_udp_get_name(m_pcb->remote_ip, m_pcb->remote_port,
                                  getpeername);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    return {api::reply_socklen{*result}, std::nullopt};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_getsockname& getsockname,
                                                    const udp_bound&)
{
    auto result = do_udp_get_name(m_pcb->local_ip, m_pcb->local_port,
                                  getsockname);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    return {api::reply_socklen{*result}, std::nullopt};
}

udp_socket::on_request_reply udp_socket::on_request(const api::request_getsockname& getsockname,
                                                    const udp_bound_and_connected&)
{
    auto result = do_udp_get_name(m_pcb->local_ip, m_pcb->local_port,
                                  getsockname);
    if (!result) return {tl::make_unexpected(result.error()), std::nullopt};
    return {api::reply_socklen{*result}, std::nullopt};
}

}
}
}
