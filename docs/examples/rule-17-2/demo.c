/* 自编 C 示例（非原文） | Rule 17.2 */
#include <stdio.h>

#ifdef COMPARE
static unsigned odd_steps(unsigned n);
static unsigned even_steps(unsigned n)
{
    unsigned steps = 0U;
    if (n > 0U) { steps = 1U + odd_steps(n - 1U); }
    return steps;
}
static unsigned odd_steps(unsigned n)
{
    return even_steps(n);
}
#else
static unsigned even_steps(unsigned n)
{
    unsigned steps = 0U;
    while (steps < n) { ++steps; }
    return steps;
}
#endif

int main(void)
{
    (void)printf("%u %u\n", even_steps(0U), even_steps(3U));
    return 0;
}
