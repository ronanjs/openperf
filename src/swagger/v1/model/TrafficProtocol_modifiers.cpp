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


#include "TrafficProtocol_modifiers.h"

namespace swagger {
namespace v1 {
namespace model {

TrafficProtocol_modifiers::TrafficProtocol_modifiers()
{
    m_Tie = "";
    m_TieIsSet = false;
    
}

TrafficProtocol_modifiers::~TrafficProtocol_modifiers()
{
}

void TrafficProtocol_modifiers::validate()
{
    // TODO: implement validation
}

nlohmann::json TrafficProtocol_modifiers::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    {
        nlohmann::json jsonArray;
        for( auto& item : m_Items )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["items"] = jsonArray;
            }
    if(m_TieIsSet)
    {
        val["tie"] = ModelBase::toJson(m_Tie);
    }
    

    return val;
}

void TrafficProtocol_modifiers::fromJson(nlohmann::json& val)
{
    {
        m_Items.clear();
        nlohmann::json jsonArray;
                for( auto& item : val["items"] )
        {
            
            if(item.is_null())
            {
                m_Items.push_back( std::shared_ptr<TrafficProtocolModifier>(nullptr) );
            }
            else
            {
                std::shared_ptr<TrafficProtocolModifier> newItem(new TrafficProtocolModifier());
                newItem->fromJson(item);
                m_Items.push_back( newItem );
            }
            
        }
    }
    if(val.find("tie") != val.end())
    {
        setTie(val.at("tie"));
        
    }
    
}


std::vector<std::shared_ptr<TrafficProtocolModifier>>& TrafficProtocol_modifiers::getItems()
{
    return m_Items;
}
std::string TrafficProtocol_modifiers::getTie() const
{
    return m_Tie;
}
void TrafficProtocol_modifiers::setTie(std::string value)
{
    m_Tie = value;
    m_TieIsSet = true;
}
bool TrafficProtocol_modifiers::tieIsSet() const
{
    return m_TieIsSet;
}
void TrafficProtocol_modifiers::unsetTie()
{
    m_TieIsSet = false;
}

}
}
}

