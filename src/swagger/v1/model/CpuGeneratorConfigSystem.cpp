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


#include "CpuGeneratorConfigSystem.h"

namespace swagger {
namespace v1 {
namespace model {

CpuGeneratorConfigSystem::CpuGeneratorConfigSystem()
{
    m_Utilization = 0.0;
    
}

CpuGeneratorConfigSystem::~CpuGeneratorConfigSystem()
{
}

void CpuGeneratorConfigSystem::validate()
{
    // TODO: implement validation
}

nlohmann::json CpuGeneratorConfigSystem::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["utilization"] = m_Utilization;
    

    return val;
}

void CpuGeneratorConfigSystem::fromJson(nlohmann::json& val)
{
    setUtilization(val.at("utilization"));
    
}


double CpuGeneratorConfigSystem::getUtilization() const
{
    return m_Utilization;
}
void CpuGeneratorConfigSystem::setUtilization(double value)
{
    m_Utilization = value;
    
}

}
}
}

