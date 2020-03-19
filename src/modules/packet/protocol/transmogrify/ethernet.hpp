#ifndef _OP_PACKET_PROTOCOL_TRANSMOGRIFY_ETHERNET_HPP_
#define _OP_PACKET_PROTOCOL_TRANSMOGRIFY_ETHERNET_HPP_

/**
 * swagger <-> libpacket transmogrify header for Ethernet
 *
 * This file is automatically generated by the transmogrify code generator.
 * Do not edit this file manually.
 **/

#include "packet/protocol/ethernet.hpp"
#include "swagger/v1/model/PacketProtocolEthernet.h"

namespace openperf::packet::protocol::transmogrify {

libpacket::protocol::ethernet to_protocol(const std::shared_ptr<swagger::v1::model::PacketProtocolEthernet>&);

std::shared_ptr<swagger::v1::model::PacketProtocolEthernet> to_swagger(libpacket::protocol::ethernet&);

}

#endif /* _OP_PACKET_PROTOCOL_TRANSMOGRIFY_ETHERNET_HPP_ */
