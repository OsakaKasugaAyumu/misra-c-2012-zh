/* 自编 C 示例（非原文） | Rule 14.2 | C99 */
#include <stdio.h>
#include <stdbool.h>
#ifdef COMPARE
static void skip(unsigned int *index) { ++(*index); }
#endif
#ifdef REVIEW_ONLY
static void idle(void) { for (;;) { } }
#endif
int main(void)
{
    unsigned int trace = 0U;
    bool stop = false;
    for (unsigned int i = 1U; (i < 6U) && !stop; ++i) {
        trace = (trace * 10U) + i;
        if (i == 3U) { stop = true; }
#ifdef COMPARE
        skip(&i);
#endif
    }
    printf("trace=%u\n",trace);
    return stop ? 0 : 1;
}
