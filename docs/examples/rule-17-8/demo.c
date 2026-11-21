/* 自编 C 示例（非原文） | Rule 17.8 */
#include <stdio.h>

static unsigned step(unsigned tick, unsigned *dst, unsigned *spare)
{
#ifdef COMPARE
    unsigned *alias = &tick;
    ++*alias;
    dst = spare;
    *dst = tick;
    return tick;
#else
    unsigned next = tick + 1U;
    *dst = next;
    (void)spare;
    return next;
#endif
}

int main(void)
{
    unsigned tick = 4U, a = 0U, b = 0U;
    unsigned out = step(tick, &a, &b);
    (void)printf("%u %u %u %u\n", out, tick, a, b);
    return 0;
}
