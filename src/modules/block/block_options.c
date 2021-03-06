#include "core/op_core.h"
#include "config/op_config_file.hpp"

MAKE_OPTION_DATA(
    block,
    NULL,
    MAKE_OPT("specifies CPU core mask for all CPU module threads, in hex",
             "modules.block.cpu-mask",
             0,
             OP_OPTION_TYPE_HEX), );

REGISTER_CLI_OPTIONS(block)
