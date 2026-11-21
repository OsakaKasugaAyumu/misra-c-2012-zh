/* 自编 C 示例（非原文） | Rule 16.5 */
#include <stdio.h>

static unsigned rank(unsigned id)
{
    unsigned value;
    switch (id) {
    case 3U:
        value = 2U;
        break;
#ifdef COMPARE
    default:
        value = 0U;
        break;
#endif
    case 7U:
        value = 4U;
        break;
#ifndef COMPARE
    default:
        value = 0U;
        break;
#endif
    }
    return value;
}

int main(void)
{
    (void)printf("%u %u %u\n", rank(3U), rank(7U), rank(9U));
    return 0;
}
