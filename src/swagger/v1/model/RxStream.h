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
 * RxStream.h
 *
 * Counters for a stream of packets
 */

#ifndef RxStream_H_
#define RxStream_H_


#include "ModelBase.h"

#include <string>
#include "AnalyzerStreamCounters.h"

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Counters for a stream of packets
/// </summary>
class  RxStream
    : public ModelBase
{
public:
    RxStream();
    virtual ~RxStream();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RxStream members

    /// <summary>
    /// Unique received stream identifier
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
        /// <summary>
    /// Unique analyzer result identifier that observed this stream
    /// </summary>
    std::string getAnalyzerResultId() const;
    void setAnalyzerResultId(std::string value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AnalyzerStreamCounters> getCounters() const;
    void setCounters(std::shared_ptr<AnalyzerStreamCounters> value);
    
protected:
    std::string m_Id;

    std::string m_Analyzer_result_id;

    std::shared_ptr<AnalyzerStreamCounters> m_Counters;

};

}
}
}

#endif /* RxStream_H_ */