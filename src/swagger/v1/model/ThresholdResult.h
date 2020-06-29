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
 * ThresholdResult.h
 *
 * Threshold result
 */

#ifndef ThresholdResult_H_
#define ThresholdResult_H_


#include "ModelBase.h"

#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Threshold result
/// </summary>
class  ThresholdResult
    : public ModelBase
{
public:
    ThresholdResult();
    virtual ~ThresholdResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ThresholdResult members

    /// <summary>
    /// Threshold configuration unique identifier
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
        /// <summary>
    /// The value of interest
    /// </summary>
    double getValue() const;
    void setValue(double value);
        /// <summary>
    /// The function to apply to the statistic before evaluating
    /// </summary>
    std::string getFunction() const;
    void setFunction(std::string value);
        /// <summary>
    /// The mathematical relation between value and statistic
    /// </summary>
    std::string getCondition() const;
    void setCondition(std::string value);
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
    /// Counter of true conditions
    /// </summary>
    int32_t getConditionTrue() const;
    void setConditionTrue(int32_t value);
        /// <summary>
    /// Counter of false conditions
    /// </summary>
    int32_t getConditionFalse() const;
    void setConditionFalse(int32_t value);
    
protected:
    std::string m_Id;

    double m_Value;

    std::string m_Function;

    std::string m_Condition;

    std::string m_Stat_x;

    std::string m_Stat_y;
    bool m_Stat_yIsSet;
    int32_t m_Condition_true;

    int32_t m_Condition_false;

};

}
}
}

#endif /* ThresholdResult_H_ */