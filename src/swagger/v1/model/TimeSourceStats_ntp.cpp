/**
* OpenPerf API
* REST API interface for OpenPerf
*
* OpenAPI spec version: 1
* Contact: support@spirent.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "TimeSourceStats_ntp.h"

namespace swagger {
namespace v1 {
namespace model {

TimeSourceStats_ntp::TimeSourceStats_ntp()
{
    m_Rx_packets = 0L;
    m_Tx_packets = 0L;
    
}

TimeSourceStats_ntp::~TimeSourceStats_ntp()
{
}

void TimeSourceStats_ntp::validate()
{
    // TODO: implement validation
}

nlohmann::json TimeSourceStats_ntp::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["rx_packets"] = m_Rx_packets;
    val["tx_packets"] = m_Tx_packets;
    

    return val;
}

void TimeSourceStats_ntp::fromJson(nlohmann::json& val)
{
    setRxPackets(val.at("rx_packets"));
    setTxPackets(val.at("tx_packets"));
    
}


int64_t TimeSourceStats_ntp::getRxPackets() const
{
    return m_Rx_packets;
}
void TimeSourceStats_ntp::setRxPackets(int64_t value)
{
    m_Rx_packets = value;
    
}
int64_t TimeSourceStats_ntp::getTxPackets() const
{
    return m_Tx_packets;
}
void TimeSourceStats_ntp::setTxPackets(int64_t value)
{
    m_Tx_packets = value;
    
}

}
}
}

