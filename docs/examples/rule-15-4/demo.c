/* 自编 C 示例（非原文） | Rule 15.4 */
#include <stdio.h>

static unsigned visit(unsigned stop)
{
    unsigned row, col, seen = 0U;
    for (row = 0U; row < 2U; ++row) {
        if (row == stop) { break; }
        for (col = 0U; col < 2U; ++col) {
#ifdef COMPARE
            if (col == stop) { goto done; }
#else
            if (col == stop) { break; }
#endif
            ++seen;
        }
    }
#ifdef COMPARE
done:
#endif
    return seen;
}

int main(void)
{
    (void)printf("%u %u\n", visit(1U), visit(2U));
    return 0;
}
