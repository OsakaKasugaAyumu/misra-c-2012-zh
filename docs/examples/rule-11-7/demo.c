/* 自编 C 示例（非原文） | Rule 11.7 | C99 */
#include <stdio.h>
#include <stddef.h>
int main(void)
{
    int sample = 8;
    int *p = &sample;
    _Bool available = p != NULL;
#ifdef COMPARE
    double value = (double)p;
    (void)value;
#endif
    printf("available=%d\n", (int)available);
    return available ? 0 : 1;
}
