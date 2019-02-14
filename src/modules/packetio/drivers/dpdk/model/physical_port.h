#ifndef _ICP_PACKETIO_DPDK_MODEL_PHYSICAL_PORT_H_
#define _ICP_PACKETIO_DPDK_MODEL_PHYSICAL_PORT_H_

#include "net/net_types.h"
#include "packetio/generic_port.h"

struct rte_eth_conf;
struct rte_eth_dev_info;
struct rte_mempool;

namespace icp {
namespace packetio {
namespace dpdk {
namespace model {

class port_info;

class physical_port
{
public:
    physical_port(int id, rte_mempool *rx_pool = nullptr);

    int id() const;

    static std::string kind();

    port::link_status link()   const;
    port::link_speed  speed()  const;
    port::link_duplex duplex() const;

    port::stats_data  stats()  const;

    port::config_data config() const;
    tl::expected<void, std::string> config(const port::config_data&);

    tl::expected<void, std::string> start();
    tl::expected<void, std::string> stop();

    tl::expected<void, std::string> low_level_config(uint16_t nb_rxqs,
                                                     uint16_t nb_txqs);

    void add_mac_address(const net::mac_address& mac);
    void del_mac_address(const net::mac_address& mac);

private:
    const int m_id;
    const rte_mempool *m_pool;

    tl::expected<void, std::string> apply_port_config(port_info&, rte_eth_conf&,
                                                      uint16_t nb_rxqs = 0,
                                                      uint16_t nb_txqs = 0);
};

}
}
}
}
#endif /* _ICP_PACKETIO_DPDK_MODEL_PHYSICAL_PORT_H_ */