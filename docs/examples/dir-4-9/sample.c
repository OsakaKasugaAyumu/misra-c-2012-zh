/* 自编 C 示例（非原文）：记录一次取样表达式实际被调用几次。 */
#include <stdio.h>

#define CLIP_BELOW_ZERO(v) (((v) < 0) ? 0 : (v))

static unsigned int reads;

static int sample(int level)
{
    ++reads;
    return level;
}

static int clip_below_zero(int level)
{
    return (level < 0) ? 0 : level;
}

static int compare(int input, int expected, unsigned int expected_macro_reads)
{
    int via_function;
    int via_macro;
    unsigned int function_reads;

    reads = 0U;
    via_function = clip_below_zero(sample(input));
    function_reads = reads;
    reads = 0U;
    via_macro = CLIP_BELOW_ZERO(sample(input));

    if (printf("in=%d function=%d/%u macro=%d/%u\n", input,
               via_function, function_reads, via_macro, reads) < 0) {
        return 2;
    }
    return ((via_function == expected) && (via_macro == expected) &&
            (function_reads == 1U) && (reads == expected_macro_reads)) ? 0 : 1;
}

int main(void)
{
    int status = compare(-4, 0, 1U);
    if (status == 0) {
        status = compare(6, 6, 2U);
    }
    return status;
}
