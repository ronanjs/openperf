#include <numeric>
#include <iostream>
#include "catch.hpp"

#include "packet/generator/traffic/modifier.hpp"

using namespace openperf::packet::generator::traffic::modifier;
using namespace libpacket::type;

template <typename Field>
void test_modifier_sequence_skips(Field first,
                                  unsigned count,
                                  std::vector<Field>& skips)
{
    auto config =
        sequence_config<Field>{.first = first, .count = count, .skip = skips};

    auto rng = to_range(config);

    REQUIRE(ranges::count_if(rng, [](const auto&) { return (true); }) == count);

    /* none of the skips should be in the generated range */
    std::for_each(std::begin(skips), std::end(skips), [&](const auto& skip) {
        REQUIRE(ranges::count(rng, skip) == 0);
    });
}

template <typename Field>
void test_modifier_sequence_stepped(Field first, unsigned count, unsigned step)
{
    auto config = sequence_config<Field>{
        .first = first, .count = count, .last = first + (count * step)};

    auto rng = to_range(config);

    REQUIRE(ranges::count_if(rng, [](const auto&) { return (true); }) == count);

    /* Make sure the difference between steps is correct */
    auto common = rng | ranges::views::common;
    auto deltas = std::vector<Field>{};
    std::adjacent_difference(
        ranges::begin(common), ranges::end(common), std::back_inserter(deltas));

    std::for_each(std::next(std::begin(deltas)),
                  std::end(deltas),
                  [&](const auto& item) { REQUIRE(item == Field(step)); });
}

TEST_CASE("packet generator modifiers", "[packet_generator]")
{
    SECTION("uint32_t")
    {
        auto skips = std::vector<uint32_t>{2, 3, 4};
        test_modifier_sequence_skips<uint32_t>(1, 10, skips);
        test_modifier_sequence_stepped<uint32_t>(1, 20, 2);
    }

    SECTION("ipv4 address")
    {
        auto skips = std::vector<ipv4_address>{"198.18.1.2", "198.18.1.3"};
        test_modifier_sequence_skips<ipv4_address>("198.18.1.0", 4, skips);
        test_modifier_sequence_stepped<ipv4_address>("224.0.0.1", 20, 3);
    }

    SECTION("ipv6 address")
    {
        auto skips = std::vector<ipv6_address>{"2001:db8::2", "2001:db8::3"};
        test_modifier_sequence_skips<ipv6_address>("2001:db8::1", 4, skips);
        test_modifier_sequence_stepped<ipv6_address>("ff00::1", 20, 4);
    }

    SECTION("mac address")
    {
        /*
         * Note: these skips aren't actually in the sequence; we're testing
         * a configuration error. :)
         */
        auto skips =
            std::vector<mac_address>{"10:94:00:01:00:aa", "10:94:00:01:00:ab"};
        test_modifier_sequence_skips<mac_address>(
            "10:94:00:01:00:a0", 4, skips);
        test_modifier_sequence_stepped<mac_address>("ff:00:00:00:00:01", 20, 5);
    }
}
