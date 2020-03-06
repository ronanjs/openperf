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
 * TxFlow.h
 *
 * A transmitted packet flow
 */

#ifndef TxFlow_H_
#define TxFlow_H_


#include "ModelBase.h"

#include <string>
#include "PacketGeneratorFlowCounters.h"

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// A transmitted packet flow
/// </summary>
class  TxFlow
    : public ModelBase
{
public:
    TxFlow();
    virtual ~TxFlow();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// TxFlow members

    /// <summary>
    /// Unique transmit flow identifier
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
        /// <summary>
    /// Unique generator identifier that transmitted this flow
    /// </summary>
    std::string getGeneratorId() const;
    void setGeneratorId(std::string value);
        /// <summary>
    /// Spirent signature stream id
    /// </summary>
    int64_t getStreamId() const;
    void setStreamId(int64_t value);
    bool streamIdIsSet() const;
    void unsetStream_id();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PacketGeneratorFlowCounters> getCounters() const;
    void setCounters(std::shared_ptr<PacketGeneratorFlowCounters> value);
    
protected:
    std::string m_Id;

    std::string m_Generator_id;

    int64_t m_Stream_id;
    bool m_Stream_idIsSet;
    std::shared_ptr<PacketGeneratorFlowCounters> m_Counters;

};

}
}
}

#endif /* TxFlow_H_ */
