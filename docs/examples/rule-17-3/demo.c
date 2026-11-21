/* 自编 C 示例（非原文） | Rule 17.3 */
#include <stdio.h>

#ifndef COMPARE
unsigned calibrate(unsigned sample);
#endif
static unsigned read_port(void)
{
    return calibrate(3U);
}
unsigned calibrate(unsigned sample)
{
    return sample + 2U;
}

int main(void)
{
    (void)printf("%u\n", read_port());
    return 0;
}
