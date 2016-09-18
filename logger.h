#ifndef __LOGGER_H
#define __LOGGER_H

#include <stdint.h>

/**
 * logger context
 */
typedef struct logger_ctx_s {
    FILE *fp;

#define LOGGER_LEVEL_ERROR          1
#define LOGGER_LEVEL_WARNING        2
#define LOGGER_LEVEL_INFO           3
#define LOGGER_LEVEL_DEBUG          4
    uint8_t level;

#define LOGGER_WITHOUT_COLOR        0
#define LOGGER_WITH_COLOR           1
    uint8_t with_color;
} logger_ctx_t;

int logger_init(char *filename, uint8_t level);
int logger_close();

int logger_debug(const char *format, ...);
int logger_info(const char *format, ...);
int logger_warn(const char *format, ...);
int logger_error(const char *format, ...);

#endif // !__LOGGER_H
