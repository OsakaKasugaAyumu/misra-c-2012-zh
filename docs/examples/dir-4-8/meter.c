/* 自编 C 示例（非原文） | Only the provider knows the representation. */
#include "meter.h"

struct meter {
#if defined(STORE_REMAINING)
    unsigned char remaining;
#else
    unsigned int filled;
#endif
};

struct meter *meter_reset(void)
{
    static struct meter display;
#if defined(STORE_REMAINING)
    display.remaining = 3U;
#else
    display.filled = 0U;
#endif
    return &display;
}

void meter_mark(struct meter *m)
{
#if defined(STORE_REMAINING)
    if (m->remaining != 0U) { --m->remaining; }
#else
    if (m->filled < 3U) { ++m->filled; }
#endif
}

unsigned int meter_count(const struct meter *m)
{
#if defined(STORE_REMAINING)
    return 3U - m->remaining;
#else
    return m->filled;
#endif
}
