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
 * TrafficProtocolIpv6Modifier.h
 *
 * Specifies how to modify an IPv6 address
 */

#ifndef TrafficProtocolIpv6Modifier_H_
#define TrafficProtocolIpv6Modifier_H_


#include "ModelBase.h"

#include "TrafficProtocolIpv6Modifier_sequence.h"
#include <string>
#include <vector>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Specifies how to modify an IPv6 address
/// </summary>
class  TrafficProtocolIpv6Modifier
    : public ModelBase
{
public:
    TrafficProtocolIpv6Modifier();
    virtual ~TrafficProtocolIpv6Modifier();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// TrafficProtocolIpv6Modifier members

    /// <summary>
    /// List of IPv6 addresses
    /// </summary>
    std::vector<std::string>& getList();
    bool listIsSet() const;
    void unsetList();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TrafficProtocolIpv6Modifier_sequence> getSequence() const;
    void setSequence(std::shared_ptr<TrafficProtocolIpv6Modifier_sequence> value);
    bool sequenceIsSet() const;
    void unsetSequence();

protected:
    std::vector<std::string> m_List;
    bool m_ListIsSet;
    std::shared_ptr<TrafficProtocolIpv6Modifier_sequence> m_Sequence;
    bool m_SequenceIsSet;
};

}
}
}

#endif /* TrafficProtocolIpv6Modifier_H_ */
