/* 自编 C 示例（非原文） | Rule 18.2 */
#include <stdio.h>

#include <stddef.h>
static unsigned span(void)
{
    unsigned slots[6];
    const unsigned *begin = &slots[2];
    const unsigned *end = &slots[6];
#ifdef COMPARE
    unsigned foreign[6];
    /* Independent arrays: review the subtraction, do not evaluate it. */
    (void)sizeof(end - &foreign[2]);
#endif
    return (unsigned)(end - begin);
}

int main(void)
{
    (void)printf("%u\n", span());
    return 0;
}
