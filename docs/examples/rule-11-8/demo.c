/* 自编 C 示例（非原文） | Rule 11.8 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int count = 5U;
    unsigned int * const fixed = &count;
    unsigned int *same = fixed;
    const volatile unsigned int *view = same;
#ifdef COMPARE
    unsigned int *plain = (unsigned int *)view;
    (void)plain; /* No access through this pointer. */
#endif
    unsigned int snapshot = *view;
    printf("snapshot=%u\n", snapshot);
    return (snapshot == 5U) ? 0 : 1;
}
