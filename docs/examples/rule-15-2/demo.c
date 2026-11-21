/* 自编 C 示例（非原文） | Rule 15.2 */
#include <stdio.h>

static unsigned tally(unsigned count)
{
    unsigned used = 0U;
#ifdef COMPARE
again:
    ++used;
    if (used < count) { goto again; }
#else
    while (used < count) {
        ++used;
        if (used == count) { goto done; }
    }
done:
#endif
    return used;
}

int main(void)
{
    (void)printf("%u %u\n", tally(1U), tally(3U));
    return 0;
}
