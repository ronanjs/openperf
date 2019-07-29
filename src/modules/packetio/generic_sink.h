#ifndef _ICP_PACKETIO_GENERIC_SINK_H_
#define _ICP_PACKETIO_GENERIC_SINK_H_

#include <memory>
#include <string>

namespace icp::packetio::packets {

class generic_sink {
public:
    template <typename Sink>
    generic_sink(Sink s)
        : m_self(std::make_shared<sink_model<Sink>>(std::move(s)))
    {}

    std::string id() const
    {
        return (m_self->id());
    }

    template <typename PacketType>
    uint16_t push(PacketType* const packets[], uint16_t length) const
    {
        return (m_self->push(reinterpret_cast<void* const *>(packets), length));
    }

    bool operator==(const generic_sink& other) const
    {
        return (id() == other.id());
    }

private:
    struct sink_concept {
        virtual ~sink_concept() = default;
        virtual std::string id() const = 0;
        virtual uint16_t push(void* const packets[], uint16_t length) = 0;
    };

    template <typename Sink>
    struct sink_model final : sink_concept {
        sink_model(Sink s)
            : m_sink(std::move(s))
        {}

        std::string id() const override
        {
            return (m_sink.id());
        }

        uint16_t push(void* const packets[], uint16_t length) override
        {
            return (m_sink.push(packets, length));
        }

        Sink m_sink;
    };

    std::shared_ptr<sink_concept> m_self;
};

}

#endif /* _ICP_PACKETIO_GENERIC_SINK_H_ */
