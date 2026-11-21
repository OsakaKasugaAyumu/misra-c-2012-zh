/* 自编 C 示例（非原文） | Rule 18.1 */
#include <stdio.h>

static unsigned sample(unsigned row, unsigned col)
{
    static const unsigned grid[2][3] = {{2U, 4U, 6U}, {8U, 10U, 12U}};
    unsigned result = 99U;
    if (row < 2U) {
        const unsigned *end = &grid[row][3]; /* form, do not dereference */
        if (col < 3U) { result = grid[row][col]; }
#ifdef COMPARE
        /* Type-check hypothetical reads without evaluating either operand. */
        (void)sizeof(*end);
        (void)sizeof(grid[0][3]); /* position of row 0's end, not an element */
#else
        (void)end;
#endif
    }
    return result;
}

int main(void)
{
    (void)printf("%u %u %u %u\n", sample(0U, 2U), sample(0U, 3U), sample(1U, 0U), sample(2U, 0U));
    return 0;
}
