#ifndef _OP_ANALYZER_SINK_HPP_
#define _OP_ANALYZER_SINK_HPP_

#include <optional>
#include <vector>

#include "core/op_core.h"
#include "packet/analyzer/api.hpp"
#include "packet/analyzer/statistics/flow/counter_map.hpp"
#include "packet/analyzer/statistics/generic_flow_counters.hpp"
#include "packet/analyzer/statistics/generic_protocol_counters.hpp"
#include "packetio/generic_sink.hpp"
#include "utils/recycle.hpp"
#include "utils/soa_container.hpp"

namespace openperf::packetio::packets {
struct packet_buffer;
}

namespace openperf::packet::analyzer {

struct sink_config
{
    std::string id = core::to_string(core::uuid::random());
    std::string source;
    api::protocol_counters_config protocol_counters =
        (statistics::protocol_flags::ethernet | statistics::protocol_flags::ip
         | statistics::protocol_flags::protocol);
    api::flow_counters_config flow_counters =
        statistics::flow_flags::frame_count;
};

class sink_result
{
public:
    using recycler = utils::recycle::depot<1>;
    using flow_counters_container =
        statistics::flow::counter_map<statistics::generic_flow_counters>;
    using protocol_shard = statistics::generic_protocol_counters;
    using flow_shard = std::pair<recycler, flow_counters_container>;

    sink_result(const sink& parent);

    bool active() const;
    const sink& parent() const;

    protocol_shard& protocol(size_t idx);
    const std::vector<protocol_shard>& protocols() const;

    flow_shard& flow(size_t idx);
    const std::vector<flow_shard>& flows() const;

    void start();
    void stop();

private:
    const sink& m_parent;
    std::vector<protocol_shard> m_protocol_shards;
    std::vector<flow_shard> m_flow_shards;
    bool m_active = false;
};

class sink
{
public:
    sink(const sink_config& config, std::vector<unsigned> rx_ids);
    ~sink() = default;

    sink(sink&& other) noexcept;
    sink& operator=(sink&& other) noexcept;

    std::string id() const;
    std::string source() const;
    size_t worker_count() const;
    api::protocol_counters_config protocol_counters() const;
    api::flow_counters_config flow_counters() const;

    sink_result* reset(sink_result* results);
    void start(sink_result* results);
    void stop();

    bool active() const;

    bool uses_feature(packetio::packet::sink_feature_flags flags) const;

    uint16_t push(const packetio::packet::packet_buffer* const packets[],
                  uint16_t count) const;

private:
    static std::vector<uint8_t> make_indexes(std::vector<unsigned>& ids);

    std::string m_id;
    std::string m_source;
    std::vector<uint8_t> m_indexes;
    api::flow_counters_config m_flow_counters;
    api::protocol_counters_config m_protocol_counters;

    mutable std::atomic<sink_result*> m_results = nullptr;
};

} // namespace openperf::packet::analyzer

#endif /* _OP_ANALYZER_SINK_HPP_ */
