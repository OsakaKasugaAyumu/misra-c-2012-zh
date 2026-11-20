/* 自编 C 示例（非原文） | ASM-01: reverse the four octets of a word */
#include <limits.h>
#include <stdio.h>

#if UINT_MAX != 0xFFFFFFFFU
#error This example requires a 32-bit unsigned int
#endif
#ifndef DEMO_USE_ASM
#define DEMO_USE_ASM 0
#endif
#if DEMO_USE_ASM && !(defined(__GNUC__) && defined(__x86_64__))
#error ASM-01 requires a GCC-compatible x86-64 target
#endif

static unsigned int reverse_c(unsigned int x)
{
    return ((x & 0x000000FFU) << 24U) | ((x & 0x0000FF00U) << 8U)
         | ((x & 0x00FF0000U) >> 8U) | ((x & 0xFF000000U) >> 24U);
}

static unsigned int reverse_word(unsigned int word)
{
#if DEMO_USE_ASM
    __asm__("bswap %0" : "+r" (word)); /* ASM-01 */
    return word;
#else
    return reverse_c(word);
#endif
}

int main(void)
{
    const unsigned int input[] = {0U, UINT_MAX, 0x12345678U, 0x80000001U};
    const unsigned int want[]  = {0U, UINT_MAX, 0x78563412U, 0x01000080U};
    unsigned int i;
    int pass = 1;
    for (i = 0U; i < (sizeof input / sizeof input[0]); ++i) {
        unsigned int got = reverse_word(input[i]);
        unsigned int ref = reverse_c(input[i]);
        printf("%08X -> %08X (C=%08X)\n", input[i], got, ref);
        if ((got != want[i]) || (ref != want[i])) {
            pass = 0;
        }
    }
    return pass ? 0 : 1;
}
