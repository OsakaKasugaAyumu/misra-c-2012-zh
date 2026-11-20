/* 自编 C 示例（非原文） | Rule 12.2 | C99 */
#include <stdio.h>
#include <stdint.h>
#ifdef COMPARE
/* Syntax check only: neither expression is executed. */
unsigned int unchecked(uint8_t bits) { return (bits << 8) | (bits << -1); }
#endif
static unsigned int narrow(uint8_t bits, int shift)
{
    if ((shift < 0) || (shift >= 8)) { return 0U; }
    return (unsigned int)(bits << (unsigned int)shift);
}
int main(void)
{
    uint8_t bits = 1U;
    unsigned int extended = (unsigned int)((uint16_t)bits << 8U);
    unsigned int a = narrow(bits,-1), b = narrow(bits,0), c = narrow(bits,7), d = narrow(bits,8);
    printf("narrow=%u,%u,%u,%u widened=%u\n", a,b,c,d,extended);
    return ((a == 0U) && (b == 1U) && (c == 128U) && (d == 0U) && (extended == 256U)) ? 0 : 1;
}
