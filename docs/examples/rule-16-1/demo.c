/* 自编 C 示例（非原文） | Rule 16.1 */
#include <stdio.h>

static unsigned select_port(unsigned id)
{
    unsigned port = 0U;
    switch (id) {
#ifdef COMPARE
        port = 9U;
#endif
    case 1U:
        port = 3U;
        break;
    default:
        port = 2U;
        break;
    }
    return port;
}

int main(void)
{
    (void)printf("%u %u\n", select_port(1U), select_port(7U));
    return 0;
}
