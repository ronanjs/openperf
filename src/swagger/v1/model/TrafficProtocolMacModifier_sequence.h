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
 * TrafficProtocolMacModifier_sequence.h
 *
 * Specifies a sequence of MAC addresses
 */

#ifndef TrafficProtocolMacModifier_sequence_H_
#define TrafficProtocolMacModifier_sequence_H_


#include "ModelBase.h"

#include "MacAddress.h"
#include <vector>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Specifies a sequence of MAC addresses
/// </summary>
class  TrafficProtocolMacModifier_sequence
    : public ModelBase
{
public:
    TrafficProtocolMacModifier_sequence();
    virtual ~TrafficProtocolMacModifier_sequence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// TrafficProtocolMacModifier_sequence members

    /// <summary>
    /// The number of addresses in the sequence
    /// </summary>
    int32_t getCount() const;
    void setCount(int32_t value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MacAddress> getStart() const;
    void setStart(std::shared_ptr<MacAddress> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MacAddress> getStop() const;
    void setStop(std::shared_ptr<MacAddress> value);
    bool stopIsSet() const;
    void unsetStop();
    /// <summary>
    /// List of addresses in the sequence to skip
    /// </summary>
    std::vector<std::shared_ptr<MacAddress>>& getSkip();
    bool skipIsSet() const;
    void unsetSkip();

protected:
    int32_t m_Count;

    std::shared_ptr<MacAddress> m_Start;

    std::shared_ptr<MacAddress> m_Stop;
    bool m_StopIsSet;
    std::vector<std::shared_ptr<MacAddress>> m_Skip;
    bool m_SkipIsSet;
};

}
}
}

#endif /* TrafficProtocolMacModifier_sequence_H_ */
