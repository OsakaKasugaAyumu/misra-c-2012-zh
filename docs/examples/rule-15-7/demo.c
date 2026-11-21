/* 自编 C 示例（非原文） | Rule 15.7 */
#include <stdio.h>

static unsigned adjust(unsigned state)
{
    unsigned duty = 5U;
    if (state == 1U) { duty = 1U; }
    else if (state == 2U) { duty = 3U; }
#ifndef COMPARE
    else { /* Preserve the current duty for unknown states. */ }
#endif
    return duty;
}

int main(void)
{
    (void)printf("%u %u %u\n", adjust(1U), adjust(2U), adjust(7U));
    return 0;
}
