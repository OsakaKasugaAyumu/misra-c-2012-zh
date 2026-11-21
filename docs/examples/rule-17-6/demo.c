/* 自编 C 示例（非原文） | Rule 17.6 */
#include <stdio.h>

#ifdef COMPARE
static unsigned first(const unsigned data[static 3])
#else
static unsigned first(const unsigned data[3])
#endif
{
    return data[0];
}
static unsigned frame(void)
{
#ifdef COMPARE
    const unsigned sample[2] = {4U, 1U};
#else
    const unsigned sample[3] = {4U, 1U, 2U};
#endif
    return first(sample);
}

int main(void)
{
    (void)printf("%u\n", frame());
    return 0;
}
