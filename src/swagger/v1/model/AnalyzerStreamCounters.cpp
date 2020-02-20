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


#include "AnalyzerStreamCounters.h"

namespace swagger {
namespace v1 {
namespace model {

AnalyzerStreamCounters::AnalyzerStreamCounters()
{
    m_Frame_lengthIsSet = false;
    m_InterarrivalIsSet = false;
    m_Jitter_ipdvIsSet = false;
    m_Jitter_rfcIsSet = false;
    m_LatencyIsSet = false;
    m_SequenceIsSet = false;
    m_Frame_count = 0L;
    m_Timestamp_first = "";
    m_Timestamp_firstIsSet = false;
    m_Timestamp_last = "";
    m_Timestamp_lastIsSet = false;
    
}

AnalyzerStreamCounters::~AnalyzerStreamCounters()
{
}

void AnalyzerStreamCounters::validate()
{
    // TODO: implement validation
}

nlohmann::json AnalyzerStreamCounters::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Frame_lengthIsSet)
    {
        val["frame_length"] = ModelBase::toJson(m_Frame_length);
    }
    if(m_InterarrivalIsSet)
    {
        val["interarrival"] = ModelBase::toJson(m_Interarrival);
    }
    if(m_Jitter_ipdvIsSet)
    {
        val["jitter_ipdv"] = ModelBase::toJson(m_Jitter_ipdv);
    }
    if(m_Jitter_rfcIsSet)
    {
        val["jitter_rfc"] = ModelBase::toJson(m_Jitter_rfc);
    }
    if(m_LatencyIsSet)
    {
        val["latency"] = ModelBase::toJson(m_Latency);
    }
    if(m_SequenceIsSet)
    {
        val["sequence"] = ModelBase::toJson(m_Sequence);
    }
    val["frame_count"] = m_Frame_count;
    if(m_Timestamp_firstIsSet)
    {
        val["timestamp_first"] = ModelBase::toJson(m_Timestamp_first);
    }
    if(m_Timestamp_lastIsSet)
    {
        val["timestamp_last"] = ModelBase::toJson(m_Timestamp_last);
    }
    

    return val;
}

void AnalyzerStreamCounters::fromJson(nlohmann::json& val)
{
    if(val.find("frame_length") != val.end())
    {
        if(!val["frame_length"].is_null())
        {
            std::shared_ptr<AnalyzerStreamCounters_frame_length> newItem(new AnalyzerStreamCounters_frame_length());
            newItem->fromJson(val["frame_length"]);
            setFrameLength( newItem );
        }
        
    }
    if(val.find("interarrival") != val.end())
    {
        if(!val["interarrival"].is_null())
        {
            std::shared_ptr<AnalyzerStreamCounters_interarrival> newItem(new AnalyzerStreamCounters_interarrival());
            newItem->fromJson(val["interarrival"]);
            setInterarrival( newItem );
        }
        
    }
    if(val.find("jitter_ipdv") != val.end())
    {
        if(!val["jitter_ipdv"].is_null())
        {
            std::shared_ptr<AnalyzerStreamCounters_jitter_ipdv> newItem(new AnalyzerStreamCounters_jitter_ipdv());
            newItem->fromJson(val["jitter_ipdv"]);
            setJitterIpdv( newItem );
        }
        
    }
    if(val.find("jitter_rfc") != val.end())
    {
        if(!val["jitter_rfc"].is_null())
        {
            std::shared_ptr<AnalyzerStreamCounters_jitter_rfc> newItem(new AnalyzerStreamCounters_jitter_rfc());
            newItem->fromJson(val["jitter_rfc"]);
            setJitterRfc( newItem );
        }
        
    }
    if(val.find("latency") != val.end())
    {
        if(!val["latency"].is_null())
        {
            std::shared_ptr<AnalyzerStreamCounters_latency> newItem(new AnalyzerStreamCounters_latency());
            newItem->fromJson(val["latency"]);
            setLatency( newItem );
        }
        
    }
    if(val.find("sequence") != val.end())
    {
        if(!val["sequence"].is_null())
        {
            std::shared_ptr<AnalyzerStreamCounters_sequence> newItem(new AnalyzerStreamCounters_sequence());
            newItem->fromJson(val["sequence"]);
            setSequence( newItem );
        }
        
    }
    setFrameCount(val.at("frame_count"));
    if(val.find("timestamp_first") != val.end())
    {
        setTimestampFirst(val.at("timestamp_first"));
        
    }
    if(val.find("timestamp_last") != val.end())
    {
        setTimestampLast(val.at("timestamp_last"));
        
    }
    
}


std::shared_ptr<AnalyzerStreamCounters_frame_length> AnalyzerStreamCounters::getFrameLength() const
{
    return m_Frame_length;
}
void AnalyzerStreamCounters::setFrameLength(std::shared_ptr<AnalyzerStreamCounters_frame_length> value)
{
    m_Frame_length = value;
    m_Frame_lengthIsSet = true;
}
bool AnalyzerStreamCounters::frameLengthIsSet() const
{
    return m_Frame_lengthIsSet;
}
void AnalyzerStreamCounters::unsetFrame_length()
{
    m_Frame_lengthIsSet = false;
}
std::shared_ptr<AnalyzerStreamCounters_interarrival> AnalyzerStreamCounters::getInterarrival() const
{
    return m_Interarrival;
}
void AnalyzerStreamCounters::setInterarrival(std::shared_ptr<AnalyzerStreamCounters_interarrival> value)
{
    m_Interarrival = value;
    m_InterarrivalIsSet = true;
}
bool AnalyzerStreamCounters::interarrivalIsSet() const
{
    return m_InterarrivalIsSet;
}
void AnalyzerStreamCounters::unsetInterarrival()
{
    m_InterarrivalIsSet = false;
}
std::shared_ptr<AnalyzerStreamCounters_jitter_ipdv> AnalyzerStreamCounters::getJitterIpdv() const
{
    return m_Jitter_ipdv;
}
void AnalyzerStreamCounters::setJitterIpdv(std::shared_ptr<AnalyzerStreamCounters_jitter_ipdv> value)
{
    m_Jitter_ipdv = value;
    m_Jitter_ipdvIsSet = true;
}
bool AnalyzerStreamCounters::jitterIpdvIsSet() const
{
    return m_Jitter_ipdvIsSet;
}
void AnalyzerStreamCounters::unsetJitter_ipdv()
{
    m_Jitter_ipdvIsSet = false;
}
std::shared_ptr<AnalyzerStreamCounters_jitter_rfc> AnalyzerStreamCounters::getJitterRfc() const
{
    return m_Jitter_rfc;
}
void AnalyzerStreamCounters::setJitterRfc(std::shared_ptr<AnalyzerStreamCounters_jitter_rfc> value)
{
    m_Jitter_rfc = value;
    m_Jitter_rfcIsSet = true;
}
bool AnalyzerStreamCounters::jitterRfcIsSet() const
{
    return m_Jitter_rfcIsSet;
}
void AnalyzerStreamCounters::unsetJitter_rfc()
{
    m_Jitter_rfcIsSet = false;
}
std::shared_ptr<AnalyzerStreamCounters_latency> AnalyzerStreamCounters::getLatency() const
{
    return m_Latency;
}
void AnalyzerStreamCounters::setLatency(std::shared_ptr<AnalyzerStreamCounters_latency> value)
{
    m_Latency = value;
    m_LatencyIsSet = true;
}
bool AnalyzerStreamCounters::latencyIsSet() const
{
    return m_LatencyIsSet;
}
void AnalyzerStreamCounters::unsetLatency()
{
    m_LatencyIsSet = false;
}
std::shared_ptr<AnalyzerStreamCounters_sequence> AnalyzerStreamCounters::getSequence() const
{
    return m_Sequence;
}
void AnalyzerStreamCounters::setSequence(std::shared_ptr<AnalyzerStreamCounters_sequence> value)
{
    m_Sequence = value;
    m_SequenceIsSet = true;
}
bool AnalyzerStreamCounters::sequenceIsSet() const
{
    return m_SequenceIsSet;
}
void AnalyzerStreamCounters::unsetSequence()
{
    m_SequenceIsSet = false;
}
int64_t AnalyzerStreamCounters::getFrameCount() const
{
    return m_Frame_count;
}
void AnalyzerStreamCounters::setFrameCount(int64_t value)
{
    m_Frame_count = value;
    
}
std::string AnalyzerStreamCounters::getTimestampFirst() const
{
    return m_Timestamp_first;
}
void AnalyzerStreamCounters::setTimestampFirst(std::string value)
{
    m_Timestamp_first = value;
    m_Timestamp_firstIsSet = true;
}
bool AnalyzerStreamCounters::timestampFirstIsSet() const
{
    return m_Timestamp_firstIsSet;
}
void AnalyzerStreamCounters::unsetTimestamp_first()
{
    m_Timestamp_firstIsSet = false;
}
std::string AnalyzerStreamCounters::getTimestampLast() const
{
    return m_Timestamp_last;
}
void AnalyzerStreamCounters::setTimestampLast(std::string value)
{
    m_Timestamp_last = value;
    m_Timestamp_lastIsSet = true;
}
bool AnalyzerStreamCounters::timestampLastIsSet() const
{
    return m_Timestamp_lastIsSet;
}
void AnalyzerStreamCounters::unsetTimestamp_last()
{
    m_Timestamp_lastIsSet = false;
}

}
}
}

