/* 自编 C 示例（非原文） | Rule 16.3 */
#include <stdio.h>

static unsigned credits(unsigned mode)
{
    unsigned n = 0U;
    switch (mode) {
    case 1U:
    case 2U:
        n = 2U;
#ifndef COMPARE
        break;
#endif
    default:
        ++n;
        break;
    }
    return n;
}

int main(void)
{
    (void)printf("%u %u %u\n", credits(1U), credits(2U), credits(0U));
    return 0;
}
