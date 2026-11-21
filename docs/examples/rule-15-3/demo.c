/* 自编 C 示例（非原文） | Rule 15.3 */
#include <stdio.h>

static unsigned route(unsigned lane)
{
    unsigned cost = 0U;
    switch (lane) {
    case 0U:
#ifdef COMPARE
        goto inside;
#else
        goto done;
#endif
    case 1U:
#ifdef COMPARE
inside:
#endif
        cost = 4U;
        break;
    default:
        cost = 8U;
        break;
    }
#ifndef COMPARE
done:
#endif
    return cost;
}

int main(void)
{
    (void)printf("%u %u %u\n", route(0U), route(1U), route(2U));
    return 0;
}
