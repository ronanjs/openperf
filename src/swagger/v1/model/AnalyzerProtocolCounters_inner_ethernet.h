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
 * AnalyzerProtocolCounters_inner_ethernet.h
 *
 * Inner layer 2 protocol counters
 */

#ifndef AnalyzerProtocolCounters_inner_ethernet_H_
#define AnalyzerProtocolCounters_inner_ethernet_H_


#include "ModelBase.h"


namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Inner layer 2 protocol counters
/// </summary>
class  AnalyzerProtocolCounters_inner_ethernet
    : public ModelBase
{
public:
    AnalyzerProtocolCounters_inner_ethernet();
    virtual ~AnalyzerProtocolCounters_inner_ethernet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// AnalyzerProtocolCounters_inner_ethernet members

    /// <summary>
    /// Number of IPv6/IPv6 frames
    /// </summary>
    int64_t getIp() const;
    void setIp(int64_t value);
        /// <summary>
    /// Number of Virtual LAN frames
    /// </summary>
    int64_t getVlan() const;
    void setVlan(int64_t value);
        /// <summary>
    /// Number of Queue-in-Queue frames
    /// </summary>
    int64_t getQinq() const;
    void setQinq(int64_t value);
    
protected:
    int64_t m_Ip;

    int64_t m_Vlan;

    int64_t m_Qinq;

};

}
}
}

#endif /* AnalyzerProtocolCounters_inner_ethernet_H_ */
