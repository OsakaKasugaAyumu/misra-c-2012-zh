/* 自编 C 示例（非原文） | Rule 12.1 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int packet = 3U, stride = 2U, offset = 1U;
#ifdef COMPARE
    unsigned int limit = packet + stride * offset;
#else
    unsigned int limit = packet + (stride * offset);
#endif
    unsigned int grouped = (packet + stride) * (offset + 1U);
    unsigned int nested = packet + (stride * (offset + 1U));
    printf("limit=%u grouped=%u nested=%u\n", limit, grouped, nested);
    return ((limit == 5U) && (grouped == 10U) && (nested == 7U)) ? 0 : 1;
}
