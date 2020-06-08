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


#include "TrafficProtocolModifier.h"

namespace swagger {
namespace v1 {
namespace model {

TrafficProtocolModifier::TrafficProtocolModifier()
{
    m_Name = "";
    m_Offset = 0;
    m_OffsetIsSet = false;
    m_Permute = false;
    m_FieldIsSet = false;
    m_Ipv4IsSet = false;
    m_Ipv6IsSet = false;
    m_MacIsSet = false;
    
}

TrafficProtocolModifier::~TrafficProtocolModifier()
{
}

void TrafficProtocolModifier::validate()
{
    // TODO: implement validation
}

nlohmann::json TrafficProtocolModifier::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["name"] = ModelBase::toJson(m_Name);
    if(m_OffsetIsSet)
    {
        val["offset"] = m_Offset;
    }
    val["permute"] = m_Permute;
    if(m_FieldIsSet)
    {
        val["field"] = ModelBase::toJson(m_Field);
    }
    if(m_Ipv4IsSet)
    {
        val["ipv4"] = ModelBase::toJson(m_Ipv4);
    }
    if(m_Ipv6IsSet)
    {
        val["ipv6"] = ModelBase::toJson(m_Ipv6);
    }
    if(m_MacIsSet)
    {
        val["mac"] = ModelBase::toJson(m_Mac);
    }
    

    return val;
}

void TrafficProtocolModifier::fromJson(nlohmann::json& val)
{
    setName(val.at("name"));
    if(val.find("offset") != val.end())
    {
        setOffset(val.at("offset"));
    }
    setPermute(val.at("permute"));
    if(val.find("field") != val.end())
    {
        if(!val["field"].is_null())
        {
            std::shared_ptr<TrafficProtocolFieldModifier> newItem(new TrafficProtocolFieldModifier());
            newItem->fromJson(val["field"]);
            setField( newItem );
        }
        
    }
    if(val.find("ipv4") != val.end())
    {
        if(!val["ipv4"].is_null())
        {
            std::shared_ptr<TrafficProtocolIpv4Modifier> newItem(new TrafficProtocolIpv4Modifier());
            newItem->fromJson(val["ipv4"]);
            setIpv4( newItem );
        }
        
    }
    if(val.find("ipv6") != val.end())
    {
        if(!val["ipv6"].is_null())
        {
            std::shared_ptr<TrafficProtocolIpv6Modifier> newItem(new TrafficProtocolIpv6Modifier());
            newItem->fromJson(val["ipv6"]);
            setIpv6( newItem );
        }
        
    }
    if(val.find("mac") != val.end())
    {
        if(!val["mac"].is_null())
        {
            std::shared_ptr<TrafficProtocolMacModifier> newItem(new TrafficProtocolMacModifier());
            newItem->fromJson(val["mac"]);
            setMac( newItem );
        }
        
    }
    
}


std::string TrafficProtocolModifier::getName() const
{
    return m_Name;
}
void TrafficProtocolModifier::setName(std::string value)
{
    m_Name = value;
    
}
int32_t TrafficProtocolModifier::getOffset() const
{
    return m_Offset;
}
void TrafficProtocolModifier::setOffset(int32_t value)
{
    m_Offset = value;
    m_OffsetIsSet = true;
}
bool TrafficProtocolModifier::offsetIsSet() const
{
    return m_OffsetIsSet;
}
void TrafficProtocolModifier::unsetOffset()
{
    m_OffsetIsSet = false;
}
bool TrafficProtocolModifier::isPermute() const
{
    return m_Permute;
}
void TrafficProtocolModifier::setPermute(bool value)
{
    m_Permute = value;
    
}
std::shared_ptr<TrafficProtocolFieldModifier> TrafficProtocolModifier::getField() const
{
    return m_Field;
}
void TrafficProtocolModifier::setField(std::shared_ptr<TrafficProtocolFieldModifier> value)
{
    m_Field = value;
    m_FieldIsSet = true;
}
bool TrafficProtocolModifier::fieldIsSet() const
{
    return m_FieldIsSet;
}
void TrafficProtocolModifier::unsetField()
{
    m_FieldIsSet = false;
}
std::shared_ptr<TrafficProtocolIpv4Modifier> TrafficProtocolModifier::getIpv4() const
{
    return m_Ipv4;
}
void TrafficProtocolModifier::setIpv4(std::shared_ptr<TrafficProtocolIpv4Modifier> value)
{
    m_Ipv4 = value;
    m_Ipv4IsSet = true;
}
bool TrafficProtocolModifier::ipv4IsSet() const
{
    return m_Ipv4IsSet;
}
void TrafficProtocolModifier::unsetIpv4()
{
    m_Ipv4IsSet = false;
}
std::shared_ptr<TrafficProtocolIpv6Modifier> TrafficProtocolModifier::getIpv6() const
{
    return m_Ipv6;
}
void TrafficProtocolModifier::setIpv6(std::shared_ptr<TrafficProtocolIpv6Modifier> value)
{
    m_Ipv6 = value;
    m_Ipv6IsSet = true;
}
bool TrafficProtocolModifier::ipv6IsSet() const
{
    return m_Ipv6IsSet;
}
void TrafficProtocolModifier::unsetIpv6()
{
    m_Ipv6IsSet = false;
}
std::shared_ptr<TrafficProtocolMacModifier> TrafficProtocolModifier::getMac() const
{
    return m_Mac;
}
void TrafficProtocolModifier::setMac(std::shared_ptr<TrafficProtocolMacModifier> value)
{
    m_Mac = value;
    m_MacIsSet = true;
}
bool TrafficProtocolModifier::macIsSet() const
{
    return m_MacIsSet;
}
void TrafficProtocolModifier::unsetMac()
{
    m_MacIsSet = false;
}

}
}
}

