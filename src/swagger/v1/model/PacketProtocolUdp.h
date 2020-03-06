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
 * PacketProtocolUdp.h
 *
 * Defines a UDP header
 */

#ifndef PacketProtocolUdp_H_
#define PacketProtocolUdp_H_


#include "ModelBase.h"

#include "TcpIpPort.h"

namespace swagger {
namespace v1 {
namespace model {

/// <summary>
/// Defines a UDP header
/// </summary>
class  PacketProtocolUdp
    : public ModelBase
{
public:
    PacketProtocolUdp();
    virtual ~PacketProtocolUdp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PacketProtocolUdp members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TcpIpPort> getSourcePort() const;
    void setSourcePort(std::shared_ptr<TcpIpPort> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TcpIpPort> getDestinationPort() const;
    void setDestinationPort(std::shared_ptr<TcpIpPort> value);
        /// <summary>
    /// header plus payload length
    /// </summary>
    int32_t getLength() const;
    void setLength(int32_t value);
    bool lengthIsSet() const;
    void unsetLength();
    /// <summary>
    /// checksum field
    /// </summary>
    int32_t getChecksum() const;
    void setChecksum(int32_t value);
    bool checksumIsSet() const;
    void unsetChecksum();

protected:
    std::shared_ptr<TcpIpPort> m_Source_port;

    std::shared_ptr<TcpIpPort> m_Destination_port;

    int32_t m_Length;
    bool m_LengthIsSet;
    int32_t m_Checksum;
    bool m_ChecksumIsSet;
};

}
}
}

#endif /* PacketProtocolUdp_H_ */
