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
 * TimeSourceConfig_ntp.h
 *
 * Network Time Protocol Server
 */

#ifndef TimeSourceConfig_ntp_H_
#define TimeSourceConfig_ntp_H_


#include "ModelBase.h"

#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Network Time Protocol Server
/// </summary>
class  TimeSourceConfig_ntp
    : public ModelBase
{
public:
    TimeSourceConfig_ntp();
    virtual ~TimeSourceConfig_ntp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// TimeSourceConfig_ntp members

    /// <summary>
    /// network hostname or address for server
    /// </summary>
    std::string getHostname() const;
    void setHostname(std::string value);
        /// <summary>
    /// service name or port for server
    /// </summary>
    std::string getPort() const;
    void setPort(std::string value);
    bool portIsSet() const;
    void unsetPort();

protected:
    std::string m_Hostname;

    std::string m_Port;
    bool m_PortIsSet;
};

}
}
}

#endif /* TimeSourceConfig_ntp_H_ */
