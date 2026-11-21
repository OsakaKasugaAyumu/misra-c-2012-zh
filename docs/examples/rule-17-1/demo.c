/* 自编 C 示例（非原文） | Rule 17.1 */
#include <stdio.h>

#ifdef COMPARE
#include <stdarg.h>
static unsigned combine(unsigned first, ...)
{
    unsigned total;
    va_list args;
    va_start(args, first);
    total = first + va_arg(args, unsigned);
    va_end(args);
    return total;
}
#else
static unsigned combine(unsigned first, unsigned second)
{
    return first + second;
}
#endif

int main(void)
{
    (void)printf("%u %u\n", combine(2U, 3U), combine(4U, 4U));
    return 0;
}
