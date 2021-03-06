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


#include "PacketProtocolIpv6.h"

namespace swagger {
namespace v1 {
namespace model {

PacketProtocolIpv6::PacketProtocolIpv6()
{
    m_Destination = "";
    m_DestinationIsSet = false;
    m_Flow_label = 0;
    m_Flow_labelIsSet = false;
    m_Hop_limit = 0;
    m_Hop_limitIsSet = false;
    m_Next_header = 0;
    m_Next_headerIsSet = false;
    m_Payload_length = 0;
    m_Payload_lengthIsSet = false;
    m_Source = "";
    m_SourceIsSet = false;
    m_Traffic_class = 0;
    m_Traffic_classIsSet = false;
    m_Version = 0;
    m_VersionIsSet = false;
    
}

PacketProtocolIpv6::~PacketProtocolIpv6()
{
}

void PacketProtocolIpv6::validate()
{
    // TODO: implement validation
}

nlohmann::json PacketProtocolIpv6::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_DestinationIsSet)
    {
        val["destination"] = ModelBase::toJson(m_Destination);
    }
    if(m_Flow_labelIsSet)
    {
        val["flow_label"] = m_Flow_label;
    }
    if(m_Hop_limitIsSet)
    {
        val["hop_limit"] = m_Hop_limit;
    }
    if(m_Next_headerIsSet)
    {
        val["next_header"] = m_Next_header;
    }
    if(m_Payload_lengthIsSet)
    {
        val["payload_length"] = m_Payload_length;
    }
    if(m_SourceIsSet)
    {
        val["source"] = ModelBase::toJson(m_Source);
    }
    if(m_Traffic_classIsSet)
    {
        val["traffic_class"] = m_Traffic_class;
    }
    if(m_VersionIsSet)
    {
        val["version"] = m_Version;
    }
    

    return val;
}

void PacketProtocolIpv6::fromJson(nlohmann::json& val)
{
    if(val.find("destination") != val.end())
    {
        setDestination(val.at("destination"));
        
    }
    if(val.find("flow_label") != val.end())
    {
        setFlowLabel(val.at("flow_label"));
    }
    if(val.find("hop_limit") != val.end())
    {
        setHopLimit(val.at("hop_limit"));
    }
    if(val.find("next_header") != val.end())
    {
        setNextHeader(val.at("next_header"));
    }
    if(val.find("payload_length") != val.end())
    {
        setPayloadLength(val.at("payload_length"));
    }
    if(val.find("source") != val.end())
    {
        setSource(val.at("source"));
        
    }
    if(val.find("traffic_class") != val.end())
    {
        setTrafficClass(val.at("traffic_class"));
    }
    if(val.find("version") != val.end())
    {
        setVersion(val.at("version"));
    }
    
}


std::string PacketProtocolIpv6::getDestination() const
{
    return m_Destination;
}
void PacketProtocolIpv6::setDestination(std::string value)
{
    m_Destination = value;
    m_DestinationIsSet = true;
}
bool PacketProtocolIpv6::destinationIsSet() const
{
    return m_DestinationIsSet;
}
void PacketProtocolIpv6::unsetDestination()
{
    m_DestinationIsSet = false;
}
int32_t PacketProtocolIpv6::getFlowLabel() const
{
    return m_Flow_label;
}
void PacketProtocolIpv6::setFlowLabel(int32_t value)
{
    m_Flow_label = value;
    m_Flow_labelIsSet = true;
}
bool PacketProtocolIpv6::flowLabelIsSet() const
{
    return m_Flow_labelIsSet;
}
void PacketProtocolIpv6::unsetFlow_label()
{
    m_Flow_labelIsSet = false;
}
int32_t PacketProtocolIpv6::getHopLimit() const
{
    return m_Hop_limit;
}
void PacketProtocolIpv6::setHopLimit(int32_t value)
{
    m_Hop_limit = value;
    m_Hop_limitIsSet = true;
}
bool PacketProtocolIpv6::hopLimitIsSet() const
{
    return m_Hop_limitIsSet;
}
void PacketProtocolIpv6::unsetHop_limit()
{
    m_Hop_limitIsSet = false;
}
int32_t PacketProtocolIpv6::getNextHeader() const
{
    return m_Next_header;
}
void PacketProtocolIpv6::setNextHeader(int32_t value)
{
    m_Next_header = value;
    m_Next_headerIsSet = true;
}
bool PacketProtocolIpv6::nextHeaderIsSet() const
{
    return m_Next_headerIsSet;
}
void PacketProtocolIpv6::unsetNext_header()
{
    m_Next_headerIsSet = false;
}
int32_t PacketProtocolIpv6::getPayloadLength() const
{
    return m_Payload_length;
}
void PacketProtocolIpv6::setPayloadLength(int32_t value)
{
    m_Payload_length = value;
    m_Payload_lengthIsSet = true;
}
bool PacketProtocolIpv6::payloadLengthIsSet() const
{
    return m_Payload_lengthIsSet;
}
void PacketProtocolIpv6::unsetPayload_length()
{
    m_Payload_lengthIsSet = false;
}
std::string PacketProtocolIpv6::getSource() const
{
    return m_Source;
}
void PacketProtocolIpv6::setSource(std::string value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool PacketProtocolIpv6::sourceIsSet() const
{
    return m_SourceIsSet;
}
void PacketProtocolIpv6::unsetSource()
{
    m_SourceIsSet = false;
}
int32_t PacketProtocolIpv6::getTrafficClass() const
{
    return m_Traffic_class;
}
void PacketProtocolIpv6::setTrafficClass(int32_t value)
{
    m_Traffic_class = value;
    m_Traffic_classIsSet = true;
}
bool PacketProtocolIpv6::trafficClassIsSet() const
{
    return m_Traffic_classIsSet;
}
void PacketProtocolIpv6::unsetTraffic_class()
{
    m_Traffic_classIsSet = false;
}
int32_t PacketProtocolIpv6::getVersion() const
{
    return m_Version;
}
void PacketProtocolIpv6::setVersion(int32_t value)
{
    m_Version = value;
    m_VersionIsSet = true;
}
bool PacketProtocolIpv6::versionIsSet() const
{
    return m_VersionIsSet;
}
void PacketProtocolIpv6::unsetVersion()
{
    m_VersionIsSet = false;
}

}
}
}

