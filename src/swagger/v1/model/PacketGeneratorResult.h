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
 * PacketGeneratorResult.h
 *
 * Results produced by a packet generator
 */

#ifndef PacketGeneratorResult_H_
#define PacketGeneratorResult_H_


#include "ModelBase.h"

#include "TrafficDurationRemainder.h"
#include <string>
#include "PacketGeneratorFlowCounters.h"
#include <vector>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Results produced by a packet generator
/// </summary>
class  PacketGeneratorResult
    : public ModelBase
{
public:
    PacketGeneratorResult();
    virtual ~PacketGeneratorResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PacketGeneratorResult members

    /// <summary>
    /// Unique generator result identifier
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
        /// <summary>
    /// Unique generator identifier that produced this result
    /// </summary>
    std::string getGeneratorId() const;
    void setGeneratorId(std::string value);
    bool generatorIdIsSet() const;
    void unsetGenerator_id();
    /// <summary>
    /// Indicates whether this result is currently being updated
    /// </summary>
    bool isActive() const;
    void setActive(bool value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PacketGeneratorFlowCounters> getFlowCounters() const;
    void setFlowCounters(std::shared_ptr<PacketGeneratorFlowCounters> value);
        /// <summary>
    /// List of unique flow ids included in stats. Individual flow statistics may be queried via the &#x60;tx-flows&#x60; endpoint. 
    /// </summary>
    std::vector<std::string>& getFlows();
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TrafficDurationRemainder> getRemaining() const;
    void setRemaining(std::shared_ptr<TrafficDurationRemainder> value);
    bool remainingIsSet() const;
    void unsetRemaining();

protected:
    std::string m_Id;

    std::string m_Generator_id;
    bool m_Generator_idIsSet;
    bool m_Active;

    std::shared_ptr<PacketGeneratorFlowCounters> m_Flow_counters;

    std::vector<std::string> m_Flows;

    std::shared_ptr<TrafficDurationRemainder> m_Remaining;
    bool m_RemainingIsSet;
};

}
}
}

#endif /* PacketGeneratorResult_H_ */
