/* 自编 C 示例（非原文） | Rule 10.5 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int sample = 6U;
    _Bool enabled = (_Bool)1U;
#ifdef COMPARE
    enabled = (_Bool)sample;
#else
    enabled = sample != 0U;
#endif
    printf("enabled=%d\n", enabled ? 1 : 0);
    return enabled ? 0 : 1;
}
