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
 * TDigestConfig.h
 *
 * T-Digest value
 */

#ifndef TDigestConfig_H_
#define TDigestConfig_H_


#include "ModelBase.h"

#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// T-Digest value
/// </summary>
class  TDigestConfig
    : public ModelBase
{
public:
    TDigestConfig();
    virtual ~TDigestConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// TDigestConfig members

    /// <summary>
    /// T-Digest configuration unique identifier
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
        /// <summary>
    /// The function to apply to the statistic before evaluating
    /// </summary>
    std::string getFunction() const;
    void setFunction(std::string value);
        /// <summary>
    /// The X statistic to track
    /// </summary>
    std::string getStatX() const;
    void setStatX(std::string value);
        /// <summary>
    /// The Y statistic to track (when using DXDY function)
    /// </summary>
    std::string getStatY() const;
    void setStatY(std::string value);
    bool statYIsSet() const;
    void unsetStat_y();
    /// <summary>
    /// The compression factor of T-Digest
    /// </summary>
    int32_t getCompression() const;
    void setCompression(int32_t value);
    
protected:
    std::string m_Id;

    std::string m_Function;

    std::string m_Stat_x;

    std::string m_Stat_y;
    bool m_Stat_yIsSet;
    int32_t m_Compression;

};

}
}
}

#endif /* TDigestConfig_H_ */
