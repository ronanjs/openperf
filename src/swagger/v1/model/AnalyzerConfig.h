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
 * AnalyzerConfig.h
 *
 * Packet analyzer configuration; the configuration specifies what packets are analyzed and what results are calculated. 
 */

#ifndef AnalyzerConfig_H_
#define AnalyzerConfig_H_


#include "ModelBase.h"

#include <string>
#include <vector>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Packet analyzer configuration; the configuration specifies what packets are analyzed and what results are calculated. 
/// </summary>
class  AnalyzerConfig
    : public ModelBase
{
public:
    AnalyzerConfig();
    virtual ~AnalyzerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// AnalyzerConfig members

    /// <summary>
    /// Berkley Packet Filter (BPF) rules that matches input packets for this analyzer to count. An empty rule, the default, matches all frames. 
    /// </summary>
    std::string getFilter() const;
    void setFilter(std::string value);
    bool filterIsSet() const;
    void unsetFilter();
    /// <summary>
    /// List of protocol counters to update per analyzer for received packets. 
    /// </summary>
    std::vector<std::string>& getProtocolCounters();
        /// <summary>
    /// List of results to generate per flow for received packets. Sequencing, latency, and jitter results require Spirent signatures in the received packets. 
    /// </summary>
    std::vector<std::string>& getFlowCounters();
    
protected:
    std::string m_Filter;
    bool m_FilterIsSet;
    std::vector<std::string> m_Protocol_counters;

    std::vector<std::string> m_Flow_counters;

};

}
}
}

#endif /* AnalyzerConfig_H_ */
