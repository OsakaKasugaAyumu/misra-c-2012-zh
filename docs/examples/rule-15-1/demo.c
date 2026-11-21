/* 自编 C 示例（非原文） | Rule 15.1 */
#include <stdio.h>

static unsigned charge(unsigned count)
{
    unsigned fee = 0U;
#ifdef COMPARE
    if (count == 0U) { goto finished; }
    fee = 3U;
finished:
    return fee;
#else
    if (count != 0U) { fee = 3U; }
    return fee;
#endif
}

int main(void)
{
    (void)printf("%u %u\n", charge(0U), charge(2U));
    return 0;
}
