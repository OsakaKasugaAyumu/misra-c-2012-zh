/* 自编 C 示例（非原文） | Rule 19.2 */
#include <stdio.h>

static unsigned forward(unsigned short field)
{
#ifdef COMPARE
    union Fields { unsigned short narrow; unsigned long wide; } data;
    data.narrow = field;
    return (unsigned)data.narrow; /* same member; no representation punning */
#else
    return (unsigned)field;
#endif
}

int main(void)
{
    (void)printf("%u %u\n", forward(0U), forward(258U));
    return 0;
}
