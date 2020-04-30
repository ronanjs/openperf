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
 * BlockGeneratorStats.h
 *
 * Block generator statistics
 */

#ifndef BlockGeneratorStats_H_
#define BlockGeneratorStats_H_


#include "ModelBase.h"


namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Block generator statistics
/// </summary>
class  BlockGeneratorStats
    : public ModelBase
{
public:
    BlockGeneratorStats();
    virtual ~BlockGeneratorStats();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// BlockGeneratorStats members

    /// <summary>
    /// The intended number of operations performed
    /// </summary>
    int64_t getOpsTarget() const;
    void setOpsTarget(int64_t value);
        /// <summary>
    /// The actual number of operations performed
    /// </summary>
    int64_t getOpsActual() const;
    void setOpsActual(int64_t value);
        /// <summary>
    /// The intended number of bytes read or written
    /// </summary>
    int64_t getBytesTarget() const;
    void setBytesTarget(int64_t value);
        /// <summary>
    /// The actual number of bytes read or written
    /// </summary>
    int64_t getBytesActual() const;
    void setBytesActual(int64_t value);
        /// <summary>
    /// The number of io_errors observed during reading or writing
    /// </summary>
    int64_t getIoErrors() const;
    void setIoErrors(int64_t value);
        /// <summary>
    /// The total amount of time required to perform all operations (in nanoseconds)
    /// </summary>
    int64_t getLatency() const;
    void setLatency(int64_t value);
        /// <summary>
    /// The minimum observed latency value (in nanoseconds)
    /// </summary>
    int64_t getLatencyMin() const;
    void setLatencyMin(int64_t value);
        /// <summary>
    /// The maximum observed latency value (in nanoseconds)
    /// </summary>
    int64_t getLatencyMax() const;
    void setLatencyMax(int64_t value);
    
protected:
    int64_t m_Ops_target;

    int64_t m_Ops_actual;

    int64_t m_Bytes_target;

    int64_t m_Bytes_actual;

    int64_t m_Io_errors;

    int64_t m_Latency;

    int64_t m_Latency_min;

    int64_t m_Latency_max;

};

}
}
}

#endif /* BlockGeneratorStats_H_ */