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


#include "CpuGeneratorResult.h"

namespace swagger {
namespace v1 {
namespace model {

CpuGeneratorResult::CpuGeneratorResult()
{
    m_Id = "";
    m_Generator_id = "";
    m_Generator_idIsSet = false;
    m_Active = false;
    m_Timestamp = "";
    m_Dynamic_resultsIsSet = false;
    
}

CpuGeneratorResult::~CpuGeneratorResult()
{
}

void CpuGeneratorResult::validate()
{
    // TODO: implement validation
}

nlohmann::json CpuGeneratorResult::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["id"] = ModelBase::toJson(m_Id);
    if(m_Generator_idIsSet)
    {
        val["generator_id"] = ModelBase::toJson(m_Generator_id);
    }
    val["active"] = m_Active;
    val["timestamp"] = ModelBase::toJson(m_Timestamp);
    val["stats"] = ModelBase::toJson(m_Stats);
    if(m_Dynamic_resultsIsSet)
    {
        val["dynamic_results"] = ModelBase::toJson(m_Dynamic_results);
    }
    

    return val;
}

void CpuGeneratorResult::fromJson(nlohmann::json& val)
{
    setId(val.at("id"));
    if(val.find("generator_id") != val.end())
    {
        setGeneratorId(val.at("generator_id"));
        
    }
    setActive(val.at("active"));
    setTimestamp(val.at("timestamp"));
    if(val.find("dynamic_results") != val.end())
    {
        if(!val["dynamic_results"].is_null())
        {
            std::shared_ptr<DynamicResults> newItem(new DynamicResults());
            newItem->fromJson(val["dynamic_results"]);
            setDynamicResults( newItem );
        }
        
    }
    
}


std::string CpuGeneratorResult::getId() const
{
    return m_Id;
}
void CpuGeneratorResult::setId(std::string value)
{
    m_Id = value;
    
}
std::string CpuGeneratorResult::getGeneratorId() const
{
    return m_Generator_id;
}
void CpuGeneratorResult::setGeneratorId(std::string value)
{
    m_Generator_id = value;
    m_Generator_idIsSet = true;
}
bool CpuGeneratorResult::generatorIdIsSet() const
{
    return m_Generator_idIsSet;
}
void CpuGeneratorResult::unsetGenerator_id()
{
    m_Generator_idIsSet = false;
}
bool CpuGeneratorResult::isActive() const
{
    return m_Active;
}
void CpuGeneratorResult::setActive(bool value)
{
    m_Active = value;
    
}
std::string CpuGeneratorResult::getTimestamp() const
{
    return m_Timestamp;
}
void CpuGeneratorResult::setTimestamp(std::string value)
{
    m_Timestamp = value;
    
}
std::shared_ptr<CpuGeneratorStats> CpuGeneratorResult::getStats() const
{
    return m_Stats;
}
void CpuGeneratorResult::setStats(std::shared_ptr<CpuGeneratorStats> value)
{
    m_Stats = value;
    
}
std::shared_ptr<DynamicResults> CpuGeneratorResult::getDynamicResults() const
{
    return m_Dynamic_results;
}
void CpuGeneratorResult::setDynamicResults(std::shared_ptr<DynamicResults> value)
{
    m_Dynamic_results = value;
    m_Dynamic_resultsIsSet = true;
}
bool CpuGeneratorResult::dynamicResultsIsSet() const
{
    return m_Dynamic_resultsIsSet;
}
void CpuGeneratorResult::unsetDynamic_results()
{
    m_Dynamic_resultsIsSet = false;
}

}
}
}

