#ifndef _OP_PACKETIO_BPF_PARSE_HPP_
#define _OP_PACKETIO_BPF_PARSE_HPP_

#include <string>
#include <vector>
#include <memory>
#include <optional>

namespace openperf::packetio::bpf {

class expr
{
public:
    virtual ~expr() = default;
    virtual expr* get_parent() const { return parent; }
    virtual std::vector<expr*> get_children() const
    {
        return std::vector<expr*>();
    }
    virtual std::string to_string() const = 0;

    expr* parent = nullptr;
};

class match_expr : public expr
{};

class generic_match_expr : public match_expr
{
public:
    generic_match_expr(std::string_view v)
        : str(v)
    {}

    std::string to_string() const override;

    std::string str;
};

class valid_match_expr : public match_expr
{
public:
    enum class flag_type {
        ETH_FCS = 0x01,
        TCPUDP_CHKSUM = 0x02,
        SIGNATURE_PRBS = 0x04
    };

    valid_match_expr(uint32_t f)
        : flags(f)
    {}

    std::string to_string() const override;

    uint32_t flags;
};

class signature_match_expr : public match_expr
{
public:
    struct stream_id_range
    {
        uint32_t start;
        uint32_t end;
    };

    signature_match_expr(const std::optional<stream_id_range>& id)
        : stream_id(id)
    {}

    std::string to_string() const override;

    std::optional<stream_id_range> stream_id;
};

enum class binary_logical_op { AND, OR };
enum class unary_logical_op { NOT };

class logical_expr : public expr
{};

class unary_logical_expr : public logical_expr
{
public:
    unary_logical_expr(std::unique_ptr<expr>&& e, unary_logical_op o)
        : expr(std::forward<std::unique_ptr<class expr>>(e))
        , op(o)
    {
        if (expr) expr->parent = this;
    }

    std::vector<expr*> get_children() const override { return {expr.get()}; }

    std::string to_string() const override;

    std::unique_ptr<expr> expr;
    unary_logical_op op; /* not */
};

class binary_logical_expr : public logical_expr
{
public:
    binary_logical_expr(std::unique_ptr<expr>&& l,
                        std::unique_ptr<expr>&& r,
                        binary_logical_op o)
        : lhs(std::forward<std::unique_ptr<expr>>(l))
        , rhs(std::forward<std::unique_ptr<expr>>(r))
        , op(o)
    {
        if (lhs) lhs->parent = this;
        if (rhs) rhs->parent = this;
    }

    std::vector<expr*> get_children() const override
    {
        return {lhs.get(), rhs.get()};
    }

    std::string to_string() const override;

    std::unique_ptr<expr> lhs;
    std::unique_ptr<expr> rhs;
    binary_logical_op op; /* and, or */
};

std::unique_ptr<expr> bpf_parse_string(std::string_view str);

std::unique_ptr<expr> bpf_split_special(std::unique_ptr<expr>&& expr);

bool is_special(const expr* e);

bool has_special(const expr* e);

bool has_all_special(const expr* e);

} // namespace openperf::packetio::bpf

#endif // _OP_PACKETIO_BPF_PARSE_HPP_