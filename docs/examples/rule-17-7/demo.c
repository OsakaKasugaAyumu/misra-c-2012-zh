/* 自编 C 示例（非原文） | Rule 17.7 */
#include <stdio.h>

static unsigned notices;
static unsigned report(unsigned id)
{
    ++notices;
    return (id < 3U) ? 1U : 0U;
}
static unsigned run(void)
{
    unsigned ok = report(2U);
#ifdef COMPARE
    report(7U);
#else
    (void)report(7U);
#endif
    return ok;
}

int main(void)
{
    unsigned saved = run();
    (void)printf("%u %u\n", saved, notices);
    return 0;
}
