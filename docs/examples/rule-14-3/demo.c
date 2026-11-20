/* 自编 C 示例（非原文） | Rule 14.3 | C99 */
#include <stdio.h>
#include <stdbool.h>
static unsigned int band(unsigned int x)
{
    if (x < 4U) {
#ifdef COMPARE
        switch (x < 8U) { case 1: return (x < 8U) ? 1U : 9U; default: return 8U; }
#else
        return 1U;
#endif
    }
    return 2U;
}
#ifdef REVIEW_ONLY
static void wait_forever(void) { while (true) { } }
#endif
int main(void)
{
    unsigned int calls = 0U;
    do { ++calls; } while (false);
    printf("bands=%u,%u once=%u\n",band(3U),band(4U),calls);
    return ((band(3U) == 1U) && (band(4U) == 2U) && (calls == 1U)) ? 0 : 1;
}
