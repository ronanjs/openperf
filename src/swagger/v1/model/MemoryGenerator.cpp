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


#include "MemoryGenerator.h"

namespace swagger {
namespace v1 {
namespace model {

MemoryGenerator::MemoryGenerator()
{
    m_Id = "";
    m_Running = false;
    m_Init_percent_complete = 0;
    
}

MemoryGenerator::~MemoryGenerator()
{
}

void MemoryGenerator::validate()
{
    // TODO: implement validation
}

nlohmann::json MemoryGenerator::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["id"] = ModelBase::toJson(m_Id);
    val["config"] = ModelBase::toJson(m_Config);
    val["running"] = m_Running;
    val["init_percent_complete"] = m_Init_percent_complete;
    

    return val;
}

void MemoryGenerator::fromJson(nlohmann::json& val)
{
    setId(val.at("id"));
    setRunning(val.at("running"));
    setInitPercentComplete(val.at("init_percent_complete"));
    
}


std::string MemoryGenerator::getId() const
{
    return m_Id;
}
void MemoryGenerator::setId(std::string value)
{
    m_Id = value;
    
}
std::shared_ptr<MemoryGeneratorConfig> MemoryGenerator::getConfig() const
{
    return m_Config;
}
void MemoryGenerator::setConfig(std::shared_ptr<MemoryGeneratorConfig> value)
{
    m_Config = value;
    
}
bool MemoryGenerator::isRunning() const
{
    return m_Running;
}
void MemoryGenerator::setRunning(bool value)
{
    m_Running = value;
    
}
int32_t MemoryGenerator::getInitPercentComplete() const
{
    return m_Init_percent_complete;
}
void MemoryGenerator::setInitPercentComplete(int32_t value)
{
    m_Init_percent_complete = value;
    
}

}
}
}

