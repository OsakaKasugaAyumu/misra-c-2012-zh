/* 自编 C 示例（非原文） | Rule 19.1 */
#include <stdio.h>

#include <string.h>
static unsigned shift(void)
{
    unsigned char frame[4] = {1U, 2U, 3U, 4U};
    unsigned char *out = &frame[0];
    const unsigned char *in = &frame[0];
    *out = *in; /* exact overlap; compatible types ignoring const */
#ifdef COMPARE
    /* Source [0,3), destination [1,4). Unevaluated call: no copy occurs. */
    (void)sizeof(memcpy(&frame[1], &frame[0], 3U));
#else
    (void)memmove(&frame[1], &frame[0], 3U);
#endif
    return 1000U * frame[0] + 100U * frame[1] + 10U * frame[2] + frame[3];
}

int main(void)
{
    (void)printf("%u\n", shift());
    return 0;
}
