#ifndef _LIB_PACKET_PROTOCOL_TCP_HPP_
#define _LIB_PACKET_PROTOCOL_TCP_HPP_

/**
 * tcp header for the packet header C++ Library
 *
 * This file is automatically generated by the library code generator.
 * Do not edit this file manually.
 **/

#include <type_traits>
#include "packet/type/endian.hpp"
#include "packet/type/enum_flags.hpp"

namespace libpacket::protocol {

struct tcp
{
    static constexpr size_t protocol_field_count = 10;
    static constexpr uint16_t protocol_length = 20;
    static constexpr std::string_view protocol_name = "tcp";

    enum class field_name
    {
        none,
        source,
        destination,
        sequence,
        ack,
        data_offset,
        reserved,
        flags,
        window,
        checksum,
        urgent_pointer,
    };

    enum class flags_value
    {
        ns = 0x100,
        cwr = 0x80,
        ece = 0x40,
        urg = 0x20,
        ack = 0x10,
        psh = 0x8,
        rst = 0x4,
        syn = 0x2,
        fin = 0x1,
    };

    type::endian::number<uint16_t> source;
    type::endian::number<uint16_t> destination;
    type::endian::number<uint32_t> sequence;
    type::endian::number<uint32_t> ack;
    type::endian::field<2> data_offset_reserved_flags;
    type::endian::number<uint16_t> window;
    type::endian::field<2> checksum;
    type::endian::field<2> urgent_pointer;

    static enum tcp::field_name get_field_name(std::string_view name) noexcept;
    static const std::type_info& get_field_type(field_name field) noexcept;

    template <typename Value>
    void set_field(enum field_name field, Value value) noexcept;
};

/**
 * tcp get functions
 **/

uint16_t get_tcp_source(const tcp& header) noexcept;
uint16_t get_tcp_destination(const tcp& header) noexcept;
uint32_t get_tcp_sequence(const tcp& header) noexcept;
uint32_t get_tcp_ack(const tcp& header) noexcept;
uint16_t get_tcp_data_offset(const tcp& header) noexcept;
uint16_t get_tcp_reserved(const tcp& header) noexcept;
type::bit_flags<tcp::flags_value> get_tcp_flags(const tcp& header) noexcept;
uint16_t get_tcp_window(const tcp& header) noexcept;
uint16_t get_tcp_checksum(const tcp& header) noexcept;
uint16_t get_tcp_urgent_pointer(const tcp& header) noexcept;

/**
 * tcp set functions
 **/

void set_tcp_defaults(tcp& header) noexcept;
void set_tcp_source(tcp& header, uint16_t value) noexcept;
void set_tcp_destination(tcp& header, uint16_t value) noexcept;
void set_tcp_sequence(tcp& header, uint32_t value) noexcept;
void set_tcp_ack(tcp& header, uint32_t value) noexcept;
void set_tcp_data_offset(tcp& header, uint16_t value) noexcept;
void set_tcp_reserved(tcp& header, uint16_t value) noexcept;
void set_tcp_flags(tcp& header, type::bit_flags<tcp::flags_value> value) noexcept;
void set_tcp_window(tcp& header, uint16_t value) noexcept;
void set_tcp_checksum(tcp& header, uint16_t value) noexcept;
void set_tcp_urgent_pointer(tcp& header, uint16_t value) noexcept;

/**
 * tcp generic functions
 **/

template <typename Value>
void tcp::set_field(enum tcp::field_name field, Value value) noexcept
{
    switch (field) {
        case tcp::field_name::source:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_source(*this, value);
            }
            break;
        case tcp::field_name::destination:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_destination(*this, value);
            }
            break;
        case tcp::field_name::sequence:
            if constexpr (std::is_convertible_v<Value, uint32_t>) {
                set_tcp_sequence(*this, value);
            }
            break;
        case tcp::field_name::ack:
            if constexpr (std::is_convertible_v<Value, uint32_t>) {
                set_tcp_ack(*this, value);
            }
            break;
        case tcp::field_name::data_offset:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_data_offset(*this, value);
            }
            break;
        case tcp::field_name::reserved:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_reserved(*this, value);
            }
            break;
        case tcp::field_name::flags:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_flags(*this, static_cast<type::bit_flags<tcp::flags_value>>(value));
            }
            break;
        case tcp::field_name::window:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_window(*this, value);
            }
            break;
        case tcp::field_name::checksum:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_checksum(*this, value);
            }
            break;
        case tcp::field_name::urgent_pointer:
            if constexpr (std::is_convertible_v<Value, uint16_t>) {
                set_tcp_urgent_pointer(*this, value);
            }
            break;
        default:
            break; /* no-op */
    }
}

}

declare_libpacket_enum_flags(libpacket::protocol::tcp::flags_value);

#endif /* _LIB_PACKET_PROTOCOL_TCP_HPP_ */
