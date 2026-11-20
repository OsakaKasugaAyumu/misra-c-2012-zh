/* 自编 C 示例（非原文） | Rule 10.1 | C99 */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint8_t bits = 12U;
#ifdef COMPARE
    int offset = 1;
#else
    unsigned int offset = 1U;
#endif
    unsigned int mask = ((unsigned int)bits >> offset) & 3U;
    unsigned int by_constant = ((unsigned int)bits >> 1) & 3U;
    printf("mask=%u constant=%u\n", mask, by_constant);
    return ((mask == 2U) && (by_constant == 2U)) ? 0 : 1;
}
