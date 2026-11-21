/* 自编 C 示例（非原文） | Rule 17.4 */
#include <stdio.h>

static unsigned level(unsigned mask)
{
#ifdef COMPARE
    if (mask != 0U) { return 3U; }
#else
    unsigned value = 0U;
    if (mask != 0U) { value = 3U; }
    return value;
#endif
}

int main(void)
{
    (void)printf("%u %u\n", level(0U), level(1U));
    return 0;
}
