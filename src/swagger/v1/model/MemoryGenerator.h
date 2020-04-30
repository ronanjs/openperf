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
/*
 * MemoryGenerator.h
 *
 * Memory generator
 */

#ifndef MemoryGenerator_H_
#define MemoryGenerator_H_


#include "ModelBase.h"

#include "MemoryGeneratorConfig.h"
#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Memory generator
/// </summary>
class  MemoryGenerator
    : public ModelBase
{
public:
    MemoryGenerator();
    virtual ~MemoryGenerator();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// MemoryGenerator members

    /// <summary>
    /// Unique memory generator identifier
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MemoryGeneratorConfig> getConfig() const;
    void setConfig(std::shared_ptr<MemoryGeneratorConfig> value);
        /// <summary>
    /// Indicates whether this generator is currently running.
    /// </summary>
    bool isRunning() const;
    void setRunning(bool value);
    
protected:
    std::string m_Id;

    std::shared_ptr<MemoryGeneratorConfig> m_Config;

    bool m_Running;

};

}
}
}

#endif /* MemoryGenerator_H_ */