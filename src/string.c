#include <string.h>

size_t strlen(const char *str) {
    const char *begin = str;

    while (*str++);
    return str - begin - 1;
}
