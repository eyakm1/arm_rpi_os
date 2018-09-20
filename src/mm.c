#include <mm.h>

void *memset(void *src, int fill, size_t size) {
    unsigned char *p = src;
    while (size > 0) {
        *p = fill;
        p++;
        size--;
    }
    return src;
}


void *memcpy(void *dst, const void *src, size_t size) {
    char *dp = dst;
    const char *sp = src;
    while (size--) {
        *dp++ = *sp++;
    }
    return dst;
}


void *memmove(void *dst, const void *src, size_t size) {
    unsigned char buf[size];
    memcpy(buf, src, size);
    memcpy(dst, buf, size);
    return dst;
}


void *memzero(void *src, size_t size) {
    return memset(src, 0, size);
}