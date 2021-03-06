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


#include "PacketProtocolEthernet.h"

namespace swagger {
namespace v1 {
namespace model {

PacketProtocolEthernet::PacketProtocolEthernet()
{
    m_Destination = "";
    m_DestinationIsSet = false;
    m_Ether_type = 0;
    m_Ether_typeIsSet = false;
    m_Source = "";
    m_SourceIsSet = false;
    
}

PacketProtocolEthernet::~PacketProtocolEthernet()
{
}

void PacketProtocolEthernet::validate()
{
    // TODO: implement validation
}

nlohmann::json PacketProtocolEthernet::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_DestinationIsSet)
    {
        val["destination"] = ModelBase::toJson(m_Destination);
    }
    if(m_Ether_typeIsSet)
    {
        val["ether_type"] = m_Ether_type;
    }
    if(m_SourceIsSet)
    {
        val["source"] = ModelBase::toJson(m_Source);
    }
    

    return val;
}

void PacketProtocolEthernet::fromJson(nlohmann::json& val)
{
    if(val.find("destination") != val.end())
    {
        setDestination(val.at("destination"));
        
    }
    if(val.find("ether_type") != val.end())
    {
        setEtherType(val.at("ether_type"));
    }
    if(val.find("source") != val.end())
    {
        setSource(val.at("source"));
        
    }
    
}


std::string PacketProtocolEthernet::getDestination() const
{
    return m_Destination;
}
void PacketProtocolEthernet::setDestination(std::string value)
{
    m_Destination = value;
    m_DestinationIsSet = true;
}
bool PacketProtocolEthernet::destinationIsSet() const
{
    return m_DestinationIsSet;
}
void PacketProtocolEthernet::unsetDestination()
{
    m_DestinationIsSet = false;
}
int32_t PacketProtocolEthernet::getEtherType() const
{
    return m_Ether_type;
}
void PacketProtocolEthernet::setEtherType(int32_t value)
{
    m_Ether_type = value;
    m_Ether_typeIsSet = true;
}
bool PacketProtocolEthernet::etherTypeIsSet() const
{
    return m_Ether_typeIsSet;
}
void PacketProtocolEthernet::unsetEther_type()
{
    m_Ether_typeIsSet = false;
}
std::string PacketProtocolEthernet::getSource() const
{
    return m_Source;
}
void PacketProtocolEthernet::setSource(std::string value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool PacketProtocolEthernet::sourceIsSet() const
{
    return m_SourceIsSet;
}
void PacketProtocolEthernet::unsetSource()
{
    m_SourceIsSet = false;
}

}
}
}

