/* 自编 C 示例（非原文） | One source, two reporting configurations */
#include <stdio.h>

#ifndef REPORT_PEAK
#define REPORT_PEAK 0
#endif

#if REPORT_PEAK /* Only the extended report needs this helper. */
static unsigned int peak_sample(unsigned int a, unsigned int b)
{
    /* Keep the higher reading; equal readings have the same peak. */
    return (a > b) ? a : b;
}
#endif

int main(void)
{
    const unsigned int a = 4U;
    const unsigned int b = 7U;
    printf("sum=%u\n", a + b);
#if REPORT_PEAK /* The compact format has no peak field. */
    printf("peak=%u\n", peak_sample(a, b));
#endif
    return 0;
}
