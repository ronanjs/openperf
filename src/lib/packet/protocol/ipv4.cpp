/**
 * IPv4 implementation for the packet header C++ Library
 *
 * This file is automatically generated by the library code generator.
 * Do not edit this file manually.
 **/

#include "ipv4.hpp"

namespace libpacket::protocol {

/**
 * IPv4 getter implementations
 **/

uint8_t get_ipv4_version(const ipv4& header) noexcept
{
    auto tmp = header.version_header_length.load<uint8_t>() & 0xf0;
    tmp >>= 4;
    return (tmp);
}

uint8_t get_ipv4_header_length(const ipv4& header) noexcept
{
    auto tmp = header.version_header_length.load<uint8_t>() & 0xf;
    tmp *= 4;
    return (tmp);
}

uint8_t get_ipv4_dscp(const ipv4& header) noexcept
{
    auto tmp = header.dscp_ecn.load<uint8_t>() & 0xfc;
    tmp >>= 2;
    return (tmp);
}

enum ipv4::ecn_value get_ipv4_ecn(const ipv4& header) noexcept
{
    auto tmp = header.dscp_ecn.load<uint8_t>() & 0x3;
    return (static_cast<enum ipv4::ecn_value>(tmp));
}

uint16_t get_ipv4_total_length(const ipv4& header) noexcept
{
    return (header.total_length.load());
}

uint16_t get_ipv4_identification(const ipv4& header) noexcept
{
    auto tmp = header.identification.load<uint16_t>();
    return (tmp);
}

type::bit_flags<ipv4::flags_value> get_ipv4_flags(const ipv4& header) noexcept
{
    auto tmp = header.flags_fragment_offset.load<uint16_t>() & 0xe000;
    tmp >>= 13;
    return (static_cast<type::bit_flags<ipv4::flags_value>>(tmp));
}

uint16_t get_ipv4_fragment_offset(const ipv4& header) noexcept
{
    auto tmp = header.flags_fragment_offset.load<uint16_t>() & 0x1fff;
    tmp *= 8;
    return (tmp);
}

uint8_t get_ipv4_time_to_live(const ipv4& header) noexcept
{
    return (header.time_to_live.load());
}

uint8_t get_ipv4_protocol(const ipv4& header) noexcept
{
    auto tmp = header.protocol.load<uint8_t>();
    return (tmp);
}

uint16_t get_ipv4_checksum(const ipv4& header) noexcept
{
    auto tmp = header.checksum.load<uint16_t>();
    return (tmp);
}

const type::ipv4_address& get_ipv4_source(const ipv4& header) noexcept
{
    return (header.source);
}

const type::ipv4_address& get_ipv4_destination(const ipv4& header) noexcept
{
    return (header.destination);
}

/**
 * IPv4 setter implementations
 **/

void set_ipv4_version(ipv4& header, uint8_t value) noexcept
{
    value <<= 4;
    header.version_header_length.store(static_cast<uint8_t>(((value & 0xf0) | (header.version_header_length.load<uint8_t>() & ~0xf0))));
}

void set_ipv4_header_length(ipv4& header, uint8_t value) noexcept
{
    value /= 4;
    header.version_header_length.store(static_cast<uint8_t>(((value & 0xf) | (header.version_header_length.load<uint8_t>() & ~0xf))));
}

void set_ipv4_dscp(ipv4& header, uint8_t value) noexcept
{
    value <<= 2;
    header.dscp_ecn.store(static_cast<uint8_t>(((value & 0xfc) | (header.dscp_ecn.load<uint8_t>() & ~0xfc))));
}

void set_ipv4_ecn(ipv4& header, enum ipv4::ecn_value value) noexcept
{
    auto tmp = static_cast<uint8_t>(value);
    header.dscp_ecn.store(static_cast<uint8_t>(((tmp & 0x3) | (header.dscp_ecn.load<uint8_t>() & ~0x3))));
}

void set_ipv4_total_length(ipv4& header, uint16_t value) noexcept
{
    header.total_length = value;
}

void set_ipv4_identification(ipv4& header, uint16_t value) noexcept
{
    header.identification.store(value);
}

void set_ipv4_flags(ipv4& header, type::bit_flags<ipv4::flags_value> value) noexcept
{
    auto tmp = static_cast<uint16_t>(value.value);
    tmp <<= 13;
    header.flags_fragment_offset.store(static_cast<uint16_t>(((tmp & 0xe000) | (header.flags_fragment_offset.load<uint16_t>() & ~0xe000))));
}

void set_ipv4_fragment_offset(ipv4& header, uint16_t value) noexcept
{
    value /= 8;
    header.flags_fragment_offset.store(static_cast<uint16_t>(((value & 0x1fff) | (header.flags_fragment_offset.load<uint16_t>() & ~0x1fff))));
}

void set_ipv4_time_to_live(ipv4& header, uint8_t value) noexcept
{
    header.time_to_live = value;
}

void set_ipv4_protocol(ipv4& header, uint8_t value) noexcept
{
    header.protocol.store(value);
}

void set_ipv4_checksum(ipv4& header, uint16_t value) noexcept
{
    header.checksum.store(value);
}

void set_ipv4_source(ipv4& header, const type::ipv4_address& value) noexcept
{
    header.source = value;
}

void set_ipv4_source(ipv4& header, type::ipv4_address&& value) noexcept
{
    set_ipv4_source(header, value);
}

void set_ipv4_destination(ipv4& header, const type::ipv4_address& value) noexcept
{
    header.destination = value;
}

void set_ipv4_destination(ipv4& header, type::ipv4_address&& value) noexcept
{
    set_ipv4_destination(header, value);
}

/**
 * IPv4 field translate implementation
 **/

template <typename Key, typename Value, typename... Pairs>
constexpr auto associative_array(Pairs&&... pairs)
    -> std::array<std::pair<Key, Value>, sizeof... (pairs)>
{
    return {{std::forward<Pairs>(pairs)...}};
}

enum ipv4::field_name ipv4::get_field_name(std::string_view name) noexcept
{
    constexpr auto field_names = associative_array<std::string_view, ipv4::field_name>(
        std::pair("version", ipv4::field_name::version),
        std::pair("header_length", ipv4::field_name::header_length),
        std::pair("dscp", ipv4::field_name::dscp),
        std::pair("ecn", ipv4::field_name::ecn),
        std::pair("total_length", ipv4::field_name::total_length),
        std::pair("identification", ipv4::field_name::identification),
        std::pair("flags", ipv4::field_name::flags),
        std::pair("fragment_offset", ipv4::field_name::fragment_offset),
        std::pair("time_to_live", ipv4::field_name::time_to_live),
        std::pair("protocol", ipv4::field_name::protocol),
        std::pair("checksum", ipv4::field_name::checksum),
        std::pair("source", ipv4::field_name::source),
        std::pair("destination", ipv4::field_name::destination));

    auto cursor = std::begin(field_names), end = std::end(field_names);
    while (cursor != end) {
        if (cursor->first == name) return (cursor->second);
        cursor++;
    }

    return (ipv4::field_name::none);
}

const std::type_info& ipv4::get_field_type(ipv4::field_name field) noexcept
{
    switch (field) {
        case ipv4::field_name::version:
            return (typeid(uint8_t));
        case ipv4::field_name::header_length:
            return (typeid(uint8_t));
        case ipv4::field_name::dscp:
            return (typeid(uint8_t));
        case ipv4::field_name::ecn:
            return (typeid(uint8_t));
        case ipv4::field_name::total_length:
            return (typeid(uint16_t));
        case ipv4::field_name::identification:
            return (typeid(uint16_t));
        case ipv4::field_name::flags:
            return (typeid(uint16_t));
        case ipv4::field_name::fragment_offset:
            return (typeid(uint16_t));
        case ipv4::field_name::time_to_live:
            return (typeid(uint8_t));
        case ipv4::field_name::protocol:
            return (typeid(uint8_t));
        case ipv4::field_name::checksum:
            return (typeid(uint16_t));
        case ipv4::field_name::source:
            return (typeid(type::ipv4_address));
        case ipv4::field_name::destination:
            return (typeid(type::ipv4_address));
        default:
            return (typeid(nullptr));
    }
}

}
