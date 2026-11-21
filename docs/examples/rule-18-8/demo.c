/* 自编 C 示例（非原文） | Rule 18.8 */
#include <stdio.h>

static unsigned counts(void)
{
#ifdef COMPARE
    unsigned n = 2U;
    typedef unsigned Sample[n];
    Sample first;
    n = 4U;
    {
        unsigned later[n];
        return 10U * (unsigned)(sizeof first / sizeof first[0])
             + (unsigned)(sizeof later / sizeof later[0]);
    }
#else
    enum { slots = 4 };
    unsigned fixed[slots];
    return (unsigned)(sizeof fixed / sizeof fixed[0]);
#endif
}

int main(void)
{
    (void)printf("%u\n", counts());
    return 0;
}
