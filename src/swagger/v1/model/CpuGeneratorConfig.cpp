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


#include "CpuGeneratorConfig.h"

namespace swagger {
namespace v1 {
namespace model {

CpuGeneratorConfig::CpuGeneratorConfig()
{
    m_Method = "";
    m_MethodIsSet = false;
    m_SystemIsSet = false;
    m_CoresIsSet = false;
    
}

CpuGeneratorConfig::~CpuGeneratorConfig()
{
}

void CpuGeneratorConfig::validate()
{
    // TODO: implement validation
}

nlohmann::json CpuGeneratorConfig::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_MethodIsSet)
    {
        val["method"] = ModelBase::toJson(m_Method);
    }
    if(m_SystemIsSet)
    {
        val["system"] = ModelBase::toJson(m_System);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Cores )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["cores"] = jsonArray;
        }
    }
    

    return val;
}

void CpuGeneratorConfig::fromJson(nlohmann::json& val)
{
    if(val.find("method") != val.end())
    {
        setMethod(val.at("method"));
        
    }
    if(val.find("system") != val.end())
    {
        if(!val["system"].is_null())
        {
            std::shared_ptr<CpuGeneratorSystemConfig> newItem(new CpuGeneratorSystemConfig());
            newItem->fromJson(val["system"]);
            setSystem( newItem );
        }
        
    }
    {
        m_Cores.clear();
        nlohmann::json jsonArray;
        if(val.find("cores") != val.end())
        {
        for( auto& item : val["cores"] )
        {
            
            if(item.is_null())
            {
                m_Cores.push_back( std::shared_ptr<CpuGeneratorCoreConfig>(nullptr) );
            }
            else
            {
                std::shared_ptr<CpuGeneratorCoreConfig> newItem(new CpuGeneratorCoreConfig());
                newItem->fromJson(item);
                m_Cores.push_back( newItem );
            }
            
        }
        }
    }
    
}


std::string CpuGeneratorConfig::getMethod() const
{
    return m_Method;
}
void CpuGeneratorConfig::setMethod(std::string value)
{
    m_Method = value;
    m_MethodIsSet = true;
}
bool CpuGeneratorConfig::methodIsSet() const
{
    return m_MethodIsSet;
}
void CpuGeneratorConfig::unsetMethod()
{
    m_MethodIsSet = false;
}
std::shared_ptr<CpuGeneratorSystemConfig> CpuGeneratorConfig::getSystem() const
{
    return m_System;
}
void CpuGeneratorConfig::setSystem(std::shared_ptr<CpuGeneratorSystemConfig> value)
{
    m_System = value;
    m_SystemIsSet = true;
}
bool CpuGeneratorConfig::systemIsSet() const
{
    return m_SystemIsSet;
}
void CpuGeneratorConfig::unsetSystem()
{
    m_SystemIsSet = false;
}
std::vector<std::shared_ptr<CpuGeneratorCoreConfig>>& CpuGeneratorConfig::getCores()
{
    return m_Cores;
}
bool CpuGeneratorConfig::coresIsSet() const
{
    return m_CoresIsSet;
}
void CpuGeneratorConfig::unsetCores()
{
    m_CoresIsSet = false;
}

}
}
}

