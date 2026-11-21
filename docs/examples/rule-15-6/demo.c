/* 自编 C 示例（非原文） | Rule 15.6 */
#include <stdio.h>

static unsigned notify(unsigned jobs)
{
    unsigned i, work = 0U, ticks = 0U;
#ifdef COMPARE
    for (i = 0U; i < jobs; ++i)
        ++work;
    ++ticks;
#else
    for (i = 0U; i < jobs; ++i) {
        ++work;
        ++ticks;
    }
#endif
    return work * 10U + ticks;
}

int main(void)
{
    (void)printf("%u %u\n", notify(0U), notify(3U));
    return 0;
}
