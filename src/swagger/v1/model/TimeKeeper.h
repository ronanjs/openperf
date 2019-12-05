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
 * TimeKeeper.h
 *
 * A combination of a TimeSource and a TimeCounter used to measure the passage of time, aka a clock 
 */

#ifndef TimeKeeper_H_
#define TimeKeeper_H_


#include "ModelBase.h"

#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// A combination of a TimeSource and a TimeCounter used to measure the passage of time, aka a clock 
/// </summary>
class  TimeKeeper
    : public ModelBase
{
public:
    TimeKeeper();
    virtual ~TimeKeeper();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// TimeKeeper members

    /// <summary>
    /// The current time and date in ISO8601 format
    /// </summary>
    std::string getTime() const;
    void setTime(std::string value);
        /// <summary>
    /// Time counter used for measuring time intervals
    /// </summary>
    std::string getTimeCounterId() const;
    void setTimeCounterId(std::string value);
        /// <summary>
    /// Time source used for wall-clock synchronization
    /// </summary>
    std::string getTimeSourceId() const;
    void setTimeSourceId(std::string value);
        /// <summary>
    /// Indicates if clock has synced to source or not
    /// </summary>
    bool isSynced() const;
    void setSynced(bool value);
    
protected:
    std::string m_Time;

    std::string m_Time_counter_id;

    std::string m_Time_source_id;

    bool m_Synced;

};

}
}
}

#endif /* TimeKeeper_H_ */
