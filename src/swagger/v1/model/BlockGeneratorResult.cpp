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


#include "BlockGeneratorResult.h"

namespace swagger {
namespace v1 {
namespace model {

BlockGeneratorResult::BlockGeneratorResult()
{
    m_Id = "";
    m_Generator_id = "";
    m_Generator_idIsSet = false;
    m_Active = false;
    m_Timestamp_first = "";
    m_Timestamp_last = "";
    m_Dynamic_resultsIsSet = false;
    
}

BlockGeneratorResult::~BlockGeneratorResult()
{
}

void BlockGeneratorResult::validate()
{
    // TODO: implement validation
}

nlohmann::json BlockGeneratorResult::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["id"] = ModelBase::toJson(m_Id);
    if(m_Generator_idIsSet)
    {
        val["generator_id"] = ModelBase::toJson(m_Generator_id);
    }
    val["active"] = m_Active;
    val["timestamp_first"] = ModelBase::toJson(m_Timestamp_first);
    val["timestamp_last"] = ModelBase::toJson(m_Timestamp_last);
    val["read"] = ModelBase::toJson(m_Read);
    val["write"] = ModelBase::toJson(m_Write);
    if(m_Dynamic_resultsIsSet)
    {
        val["dynamic_results"] = ModelBase::toJson(m_Dynamic_results);
    }
    

    return val;
}

void BlockGeneratorResult::fromJson(nlohmann::json& val)
{
    setId(val.at("id"));
    if(val.find("generator_id") != val.end())
    {
        setGeneratorId(val.at("generator_id"));
        
    }
    setActive(val.at("active"));
    setTimestampFirst(val.at("timestamp_first"));
    setTimestampLast(val.at("timestamp_last"));
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


std::string BlockGeneratorResult::getId() const
{
    return m_Id;
}
void BlockGeneratorResult::setId(std::string value)
{
    m_Id = value;
    
}
std::string BlockGeneratorResult::getGeneratorId() const
{
    return m_Generator_id;
}
void BlockGeneratorResult::setGeneratorId(std::string value)
{
    m_Generator_id = value;
    m_Generator_idIsSet = true;
}
bool BlockGeneratorResult::generatorIdIsSet() const
{
    return m_Generator_idIsSet;
}
void BlockGeneratorResult::unsetGenerator_id()
{
    m_Generator_idIsSet = false;
}
bool BlockGeneratorResult::isActive() const
{
    return m_Active;
}
void BlockGeneratorResult::setActive(bool value)
{
    m_Active = value;
    
}
std::string BlockGeneratorResult::getTimestampFirst() const
{
    return m_Timestamp_first;
}
void BlockGeneratorResult::setTimestampFirst(std::string value)
{
    m_Timestamp_first = value;
    
}
std::string BlockGeneratorResult::getTimestampLast() const
{
    return m_Timestamp_last;
}
void BlockGeneratorResult::setTimestampLast(std::string value)
{
    m_Timestamp_last = value;
    
}
std::shared_ptr<BlockGeneratorStats> BlockGeneratorResult::getRead() const
{
    return m_Read;
}
void BlockGeneratorResult::setRead(std::shared_ptr<BlockGeneratorStats> value)
{
    m_Read = value;
    
}
std::shared_ptr<BlockGeneratorStats> BlockGeneratorResult::getWrite() const
{
    return m_Write;
}
void BlockGeneratorResult::setWrite(std::shared_ptr<BlockGeneratorStats> value)
{
    m_Write = value;
    
}
std::shared_ptr<DynamicResults> BlockGeneratorResult::getDynamicResults() const
{
    return m_Dynamic_results;
}
void BlockGeneratorResult::setDynamicResults(std::shared_ptr<DynamicResults> value)
{
    m_Dynamic_results = value;
    m_Dynamic_resultsIsSet = true;
}
bool BlockGeneratorResult::dynamicResultsIsSet() const
{
    return m_Dynamic_resultsIsSet;
}
void BlockGeneratorResult::unsetDynamic_results()
{
    m_Dynamic_resultsIsSet = false;
}

}
}
}

