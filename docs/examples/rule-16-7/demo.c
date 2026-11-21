/* 自编 C 示例（非原文） | Rule 16.7 */
#include <stdio.h>

static unsigned signal(unsigned raw)
{
    unsigned lamp;
#ifdef COMPARE
    switch (raw != 0U) {
    case 0: lamp = 2U; break;
    default: lamp = 3U; break;
    }
#else
    if (raw != 0U) { lamp = 3U; }
    else { lamp = 2U; }
#endif
    return lamp;
}

int main(void)
{
    (void)printf("%u %u\n", signal(0U), signal(8U));
    return 0;
}
