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
 * PacketCaptureConfig.h
 *
 * Packet capture configuration; the configuration controls the capture behavior. 
 */

#ifndef PacketCaptureConfig_H_
#define PacketCaptureConfig_H_


#include "ModelBase.h"

#include <string>

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Packet capture configuration; the configuration controls the capture behavior. 
/// </summary>
class  PacketCaptureConfig
    : public ModelBase
{
public:
    PacketCaptureConfig();
    virtual ~PacketCaptureConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PacketCaptureConfig members

    /// <summary>
    /// Capture mode
    /// </summary>
    std::string getMode() const;
    void setMode(std::string value);
        /// <summary>
    /// Indicates whether capture wraps when it reaches the end of the buffer.  When buffer wrap is enabled capture will continue until capture is stopped with the stop command or a stop trigger. 
    /// </summary>
    bool isBufferWrap() const;
    void setBufferWrap(bool value);
    bool bufferWrapIsSet() const;
    void unsetBuffer_wrap();
    /// <summary>
    /// Capture buffer size in bytes.
    /// </summary>
    int64_t getBufferSize() const;
    void setBufferSize(int64_t value);
        /// <summary>
    /// Maximum length of packet to capture. If the packet is larger than the packet size, the packet is truncated.
    /// </summary>
    int32_t getPacketSize() const;
    void setPacketSize(int32_t value);
    bool packetSizeIsSet() const;
    void unsetPacket_size();
    /// <summary>
    /// Berkley Packet Filter (BPF) rules that matches packets to capture.  An empty rule, the default, matches all frames. 
    /// </summary>
    std::string getFilter() const;
    void setFilter(std::string value);
    bool filterIsSet() const;
    void unsetFilter();
    /// <summary>
    /// Berkley Packet Filter (BPF) rules used to trigger the start of packet capture.  When a trigger condition is specified, the capture start command puts capture into an armed state and capture will only begin when the trigger condition occurs. 
    /// </summary>
    std::string getStartTrigger() const;
    void setStartTrigger(std::string value);
    bool startTriggerIsSet() const;
    void unsetStart_trigger();
    /// <summary>
    /// Berkley Packet Filter (BPF) rules used to trigger the stop of packet capture. 
    /// </summary>
    std::string getStopTrigger() const;
    void setStopTrigger(std::string value);
    bool stopTriggerIsSet() const;
    void unsetStop_trigger();
    /// <summary>
    /// Maximum time duration for the capture in msec. 
    /// </summary>
    int64_t getDuration() const;
    void setDuration(int64_t value);
    bool durationIsSet() const;
    void unsetDuration();

protected:
    std::string m_Mode;

    bool m_Buffer_wrap;
    bool m_Buffer_wrapIsSet;
    int64_t m_Buffer_size;

    int32_t m_Packet_size;
    bool m_Packet_sizeIsSet;
    std::string m_Filter;
    bool m_FilterIsSet;
    std::string m_Start_trigger;
    bool m_Start_triggerIsSet;
    std::string m_Stop_trigger;
    bool m_Stop_triggerIsSet;
    int64_t m_Duration;
    bool m_DurationIsSet;
};

}
}
}

#endif /* PacketCaptureConfig_H_ */
