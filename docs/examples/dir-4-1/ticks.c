/* 自编 C 示例（非原文） | Checked tick budget */
#include <limits.h>
#include <stddef.h>
#include <stdio.h>

/* out is NULL or points to one writable unsigned int. */
static int tick_total(unsigned int base, unsigned int count,
                      unsigned int step, unsigned int *out)
{
    if (out == NULL) {
        return 0;
    }
    if ((step != 0U) && (count > ((UINT_MAX - base) / step))) {
        return 0;
    }
    *out = base + (count * step);
    return 1;
}

static int check(const char *name, unsigned int base, unsigned int count,
                 unsigned int step, int expected_ok, unsigned int expected)
{
    unsigned int total = 77U;
    int ok = tick_total(base, count, step, &total);
    printf("%s: ok=%d total=%u\n", name, ok, total);
    return (ok == expected_ok) && (total == expected);
}

int main(void)
{
    int passes = 0;
    int null_ok;
    passes += check("normal", 5U, 4U, 3U, 1, 17U);
    passes += check("exact-max", UINT_MAX - 6U, 3U, 2U, 1, UINT_MAX);
    passes += check("sum-too-large", UINT_MAX - 5U, 3U, 2U, 0, 77U);
    passes += check("product-too-large", 0U, UINT_MAX, 2U, 0, 77U);
    passes += check("zero-step", 9U, UINT_MAX, 0U, 1, 9U);
    passes += check("zero-count", 9U, 0U, UINT_MAX, 1, 9U);
    null_ok = tick_total(5U, 4U, 3U, NULL);
    printf("null-output: ok=%d\n", null_ok);
    return ((passes == 6) && (null_ok == 0)) ? 0 : 1;
}
