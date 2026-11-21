/* 自编 C 示例（非原文） | Rule 16.6 */
#include <stdio.h>

static unsigned priority(unsigned key)
{
    unsigned level;
    switch (key) {
    case 4U:
#ifndef COMPARE
        level = 2U;
        break;
#endif
    default:
        level = 1U;
        break;
    }
    return level;
}

int main(void)
{
    (void)printf("%u %u\n", priority(4U), priority(6U));
    return 0;
}
