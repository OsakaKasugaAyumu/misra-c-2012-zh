/* 自编 C 示例（非原文） | Review the names used for the two bin counts. */
#include <stdio.h>

struct reading {
    unsigned int bin0;
};

/* Review case: two similar ordinary identifiers are visible together. */
static unsigned int remaining_review(void)
{
    const unsigned int bin_O = 12U;
    const unsigned int bin0 = 7U;
    return bin_O - bin0;
}

static unsigned int remaining_named(void)
{
    const unsigned int bin_capacity = 12U;
    const unsigned int bin_used = 7U;
    return bin_capacity - bin_used;
}

/* Control: the member is selected through the struct, not by bare name. */
static unsigned int member_control(void)
{
    const struct reading sample = { 7U };
    const unsigned int bin_O = 12U;
    return bin_O - sample.bin0;
}

int main(void)
{
    const unsigned int a = remaining_review();
    const unsigned int b = remaining_named();
    const unsigned int c = member_control();
    printf("review=%u named=%u member=%u\n", a, b, c);
    return ((a == 5U) && (b == 5U) && (c == 5U)) ? 0 : 1;
}
