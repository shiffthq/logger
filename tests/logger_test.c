#include <stdio.h>
#include "logger.h"

int main() {

    logger_init("test.log", LOGGER_LEVEL_DEBUG);

    printf("\n##### log with color and debug level\n");
    logger_error("color error\n");
    logger_warn("color warning\n");
    logger_info("color infomation\n");
    logger_debug("color debug\n");
    logger_close();

    logger_init("test.log", LOGGER_LEVEL_DEBUG | LOGGER_COLOR_OFF);

    printf("\n##### log without color and debug level\n");
    logger_error("normal error\n");
    logger_warn("normal warning\n");
    logger_info("normal infomation\n");
    logger_debug("normal debug\n");

    logger_close();

    logger_init("test.log", LOGGER_LEVEL_WARNING);

    printf("\n##### log with color and debug warning\n");
    logger_error("should log error\n");
    logger_warn("should log warning\n");
    logger_info("should not log infomation\n");
    logger_debug("should not log debug\n");

    logger_close();

    return 0;
}
