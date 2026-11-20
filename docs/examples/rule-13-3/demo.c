/* 自编 C 示例（非原文） | Rule 13.3 | C99 */
#include <stdio.h>
static unsigned int calls;
static void record(unsigned int id) { if (id == 7U) { ++calls; } }
int main(void)
{
    unsigned int seq = 7U;
#ifdef COMPARE
    record(seq++);
    if (0) { record(seq++); }
    (void)((0 != 0) && (seq++ == calls++));
#else
    record(seq);
    ++seq;
#endif
    printf("next=%u calls=%u\n", seq, calls);
    return ((seq == 8U) && (calls == 1U)) ? 0 : 1;
}
