#include "core/icp_core.h"

extern int dpdk_option_init(void *opt_data);
extern int dpdk_option_handler(int opt, const char *opt_arg, void *opt_data);

struct icp_options_data dpdk_options = {
    .name = "DPDK",
    .init = dpdk_option_init,
    .callback = dpdk_option_handler,
    .data = NULL,
    .options = {
        {"quoted, comma separated options for DPDK", "dpdk", 'd', true},
        { 0, 0, 0, 0 },
    },
};

REGISTER_OPTIONS(dpdk_options)