/* 自编 C 示例（非原文） | Rule 18.3 */
#include <stdio.h>

struct Window { unsigned first; unsigned last; };
static unsigned inspect(void)
{
    struct Window a = {2U, 4U};
    unsigned lane[3];
    unsigned order = (&lane[0] < &lane[2]) ? 1U : 0U;
#ifdef COMPARE
    struct Window b = {3U, 9U};
    /* Do not evaluate relational ordering between distinct instances. */
    (void)sizeof(&a.first < &b.last);
#endif
    return order + ((&a.first < &a.last) ? 2U : 0U);
}

int main(void)
{
    (void)printf("%u\n", inspect());
    return 0;
}
