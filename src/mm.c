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


void *memmove(void *dst, const void *src, size_t n) {
    unsigned char buf[n];
    memcpy(buf, src, n);
    memcpy(dst, buf, n);
    return dst;
}