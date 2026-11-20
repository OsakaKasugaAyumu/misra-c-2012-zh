/* 自编 C 示例（非原文）：先验证装盘参数，再调用标准库 div。 */
#include <stdio.h>
#include <stdlib.h>

static unsigned int div_calls;

/* On rejection the caller's output is left untouched. */
static int split_trays(int pieces, int per_tray, div_t *out)
{
    if ((pieces < 0) || (pieces > 600) ||
        (per_tray < 1) || (per_tray > 24)) {
        return 0;
    }
    ++div_calls;
    *out = div(pieces, per_tray);
    return 1;
}

struct test_row {
    int pieces, per_tray, accept, quotient, remainder;
};

int main(void)
{
    static const struct test_row rows[] = {
        { 0, 1, 1, 0, 0 }, { 53, 12, 1, 4, 5 }, { 600, 24, 1, 25, 0 },
        { 53, 0, 0, -1, -1 }, { 53, 25, 0, -1, -1 },
        { -1, 12, 0, -1, -1 }, { 601, 12, 0, -1, -1 }
    };
    size_t i;
    for (i = 0U; i < (sizeof rows / sizeof rows[0]); ++i) {
        div_t out;
        int accept;
        unsigned int delta = div_calls;
        out.quot = -1;
        out.rem = -1;
        accept = split_trays(rows[i].pieces, rows[i].per_tray, &out);
        delta = div_calls - delta;
        if (printf("%d/%d accept=%d calls=%u out=%d,%d\n", rows[i].pieces,
                   rows[i].per_tray, accept, delta, out.quot, out.rem) < 0) {
            return 2;
        }
        if ((accept != rows[i].accept) || (delta != (unsigned int)accept) ||
            (out.quot != rows[i].quotient) || (out.rem != rows[i].remainder)) {
            return 1;
        }
    }
    return 0;
}
