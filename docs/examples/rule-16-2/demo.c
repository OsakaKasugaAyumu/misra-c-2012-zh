/* 自编 C 示例（非原文） | Rule 16.2 */
#include <stdio.h>

static unsigned dispatch(unsigned slot)
{
    unsigned code = 0U;
    switch (slot) {
#ifdef COMPARE
    {
#endif
    case 2U:
        code = 8U;
        break;
#ifdef COMPARE
    }
#endif
    default:
        code = 9U;
        break;
    }
    return code;
}

int main(void)
{
    (void)printf("%u %u\n", dispatch(2U), dispatch(9U));
    return 0;
}
