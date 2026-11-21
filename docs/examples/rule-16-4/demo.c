/* 自编 C 示例（非原文） | Rule 16.4 */
#include <stdio.h>

static unsigned preserve(unsigned mode)
{
    unsigned flags = 4U;
    switch (mode) {
    case 1U:
        flags = 1U;
        break;
    case 2U:
        flags = 2U;
        break;
#ifndef COMPARE
    default:
        /* Unknown modes must keep the previous flags. */
        break;
#endif
    }
    return flags;
}

int main(void)
{
    (void)printf("%u %u %u\n", preserve(1U), preserve(2U), preserve(8U));
    return 0;
}
