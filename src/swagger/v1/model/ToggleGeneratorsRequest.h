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
 * ToggleGeneratorsRequest.h
 *
 * Parameters for the toggle operation
 */

#ifndef ToggleGeneratorsRequest_H_
#define ToggleGeneratorsRequest_H_


#include "ModelBase.h"

#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Parameters for the toggle operation
/// </summary>
class  ToggleGeneratorsRequest
    : public ModelBase
{
public:
    ToggleGeneratorsRequest();
    virtual ~ToggleGeneratorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ToggleGeneratorsRequest members

    /// <summary>
    /// The unique id of the running generator
    /// </summary>
    std::string getReplace() const;
    void setReplace(std::string value);
        /// <summary>
    /// The unique id of the stopped generator
    /// </summary>
    std::string getWith() const;
    void setWith(std::string value);
    
protected:
    std::string m_Replace;

    std::string m_With;

};

}
}
}

#endif /* ToggleGeneratorsRequest_H_ */
