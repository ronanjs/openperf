/**
 * swagger <-> libpacket transmogrify implementation for tcp
 *
 * This file is automatically generated by the transmogrify code generator.
 * Do not edit this file manually.
 **/

#include "tcp.hpp"

namespace openperf::packet::protocol::transmogrify {

std::shared_ptr<swagger::v1::model::PacketProtocolTcp> to_swagger(libpacket::protocol::tcp& src)
{
    auto dst = std::make_shared<swagger::v1::model::PacketProtocolTcp>();

    dst->setSource(get_tcp_source(src));
    dst->setDestination(get_tcp_destination(src));
    dst->setSequence(get_tcp_sequence(src));
    dst->setAck(get_tcp_ack(src));
    dst->setDataOffset(get_tcp_data_offset(src));
    dst->setReserved(get_tcp_reserved(src));
    
    auto src_flags = get_tcp_flags(src);
    if (src_flags & libpacket::protocol::tcp::flags_value::ns)
    {
        dst->getFlags().emplace_back("ns");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::cwr)
    {
        dst->getFlags().emplace_back("cwr");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::ece)
    {
        dst->getFlags().emplace_back("ece");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::urg)
    {
        dst->getFlags().emplace_back("urg");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::ack)
    {
        dst->getFlags().emplace_back("ack");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::psh)
    {
        dst->getFlags().emplace_back("psh");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::rst)
    {
        dst->getFlags().emplace_back("rst");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::syn)
    {
        dst->getFlags().emplace_back("syn");
    }
    if (src_flags & libpacket::protocol::tcp::flags_value::fin)
    {
        dst->getFlags().emplace_back("fin");
    }
    
    dst->setWindow(get_tcp_window(src));
    dst->setChecksum(get_tcp_checksum(src));
    dst->setUrgentPointer(get_tcp_urgent_pointer(src));

    return (dst);
}

static libpacket::type::bit_flags<libpacket::protocol::tcp::flags_value> to_tcp_flags(std::vector<std::string>& values)
{
    auto tmp = libpacket::type::bit_flags<libpacket::protocol::tcp::flags_value>{0};
    for (auto& value : values)
    {
        if (value == "ns")
        {
            tmp |= libpacket::protocol::tcp::flags_value::ns;
        }
        else if (value == "cwr")
        {
            tmp |= libpacket::protocol::tcp::flags_value::cwr;
        }
        else if (value == "ece")
        {
            tmp |= libpacket::protocol::tcp::flags_value::ece;
        }
        else if (value == "urg")
        {
            tmp |= libpacket::protocol::tcp::flags_value::urg;
        }
        else if (value == "ack")
        {
            tmp |= libpacket::protocol::tcp::flags_value::ack;
        }
        else if (value == "psh")
        {
            tmp |= libpacket::protocol::tcp::flags_value::psh;
        }
        else if (value == "rst")
        {
            tmp |= libpacket::protocol::tcp::flags_value::rst;
        }
        else if (value == "syn")
        {
            tmp |= libpacket::protocol::tcp::flags_value::syn;
        }
        else if (value == "fin")
        {
            tmp |= libpacket::protocol::tcp::flags_value::fin;
        }
    }
    return (tmp);
}

libpacket::protocol::tcp to_protocol(const std::shared_ptr<swagger::v1::model::PacketProtocolTcp>& src)
{
    auto dst = libpacket::protocol::tcp{};
    set_tcp_defaults(dst);

    if (src) {
        if (src->sourceIsSet())
        {
            set_tcp_source(dst, src->getSource());
        }
        if (src->destinationIsSet())
        {
            set_tcp_destination(dst, src->getDestination());
        }
        if (src->sequenceIsSet())
        {
            set_tcp_sequence(dst, src->getSequence());
        }
        if (src->ackIsSet())
        {
            set_tcp_ack(dst, src->getAck());
        }
        if (src->dataOffsetIsSet())
        {
            set_tcp_data_offset(dst, src->getDataOffset());
        }
        if (src->reservedIsSet())
        {
            set_tcp_reserved(dst, src->getReserved());
        }
        if (src->getFlags().size())
        {
            set_tcp_flags(dst, to_tcp_flags(src->getFlags()));
        }
        if (src->windowIsSet())
        {
            set_tcp_window(dst, src->getWindow());
        }
        if (src->checksumIsSet())
        {
            set_tcp_checksum(dst, src->getChecksum());
        }
        if (src->urgentPointerIsSet())
        {
            set_tcp_urgent_pointer(dst, src->getUrgentPointer());
        }
    }

    return (dst);
}

}
