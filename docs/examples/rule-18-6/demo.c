/* 自编 C 示例（非原文） | Rule 18.6 */
#include <stdio.h>

#include <string.h>
static unsigned saved_value;
static unsigned *saved_ptr;
static unsigned stable = 8U;
static void remember(unsigned *p)
{
    (void)memcpy(&saved_ptr, &p, sizeof p); /* copy the pointer, not its target */
}
static void observe(void)
{
    unsigned local = 5U;
    saved_value = local;
#ifdef COMPARE
    remember(&local); /* review only: address retained beyond this block */
#else
    remember(&stable);
#endif
}
static unsigned saved_result(void)
{
#ifdef COMPARE
    /* Retained address is not read, even in this audit-only branch. */
    return 0U;
#else
    return *saved_ptr;
#endif
}

int main(void)
{
    observe();
    (void)printf("%u %u\n", saved_value, saved_result());
    return 0;
}
