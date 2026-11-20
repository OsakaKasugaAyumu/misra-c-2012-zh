/* 自编 C 示例（非原文） | Rule 13.2 | C99 */
#include <stdio.h>
static volatile unsigned int first = 1U, second = 2U;
static unsigned int combine(unsigned int a, unsigned int b) { return (10U * a) + b; }
int main(void)
{
    unsigned int count = 5U;
    unsigned int *alias = &count;
    unsigned int left = first;
    unsigned int right = second;
#ifdef COMPARE
    /* Static review only: both names designate the same object. */
    unsigned int pair = combine((*alias)++, count);
#else
    unsigned int saved = *alias;
    ++(*alias);
    unsigned int pair = combine(saved, count);
#endif
    printf("pair=%u count=%u ports=%u\n", pair, count, left + right);
    return ((pair == 56U) && (count == 6U)) ? 0 : 1;
}
