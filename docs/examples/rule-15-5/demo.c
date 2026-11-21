/* 自编 C 示例（非原文） | Rule 15.5 */
#include <stdio.h>

static unsigned close_count;
static unsigned check(unsigned size)
{
    unsigned ok = 0U;
#ifdef COMPARE
    if (size == 0U) { return 0U; }
    ok = 1U;
#else
    if (size != 0U) { ok = 1U; }
#endif
    ++close_count;
    return ok;
}

int main(void)
{
    unsigned empty = check(0U);
    unsigned full = check(2U);
    (void)printf("%u %u %u\n", empty, full, close_count);
    return 0;
}
