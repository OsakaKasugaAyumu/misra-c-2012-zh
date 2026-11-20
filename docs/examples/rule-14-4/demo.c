/* 自编 C 示例（非原文） | Rule 14.4 | C99 */
#include <stdio.h>
#include <stddef.h>
static unsigned int score(const unsigned int *p, unsigned int count)
{
    unsigned int points = 0U;
#ifdef COMPARE
    if (p) { ++points; }
    if (count) { ++points; }
#else
    if (p != NULL) { ++points; }
    if (count != 0U) { ++points; }
#endif
    for (;;) { break; }
    return points;
}
int main(void)
{
    unsigned int token = 0U;
    unsigned int a = score(NULL,0U), b = score(&token,0U), c = score(NULL,5U), d = score(&token,5U);
    printf("scores=%u,%u,%u,%u\n",a,b,c,d);
    return ((a == 0U) && (b == 1U) && (c == 1U) && (d == 2U)) ? 0 : 1;
}
