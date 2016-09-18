#include <stdio.h>
#include "logger.h"

int main() {

    logger_init("test.log", LOGGER_LEVEL_DEBUG);

    logger_error("error\n");
    logger_warn("warning\n");
    logger_info("infomation\n");
    logger_debug("debug\n");

    logger_close();

    return 0;
}
