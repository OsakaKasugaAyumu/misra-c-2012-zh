/* 自编 C 示例（非原文） | Rule 12.4 | C99 */
#include <stdio.h>
#include <limits.h>
#ifdef COMPARE
#define LAST_SLOT (UINT_MAX + 1U)
#else
#define LAST_SLOT (UINT_MAX - 1U)
#endif
#define SKIPPED ((1U != 0U) ? 7U : (UINT_MAX + 1U))
typedef char check_skipped[(SKIPPED == 7U) ? 1 : -1];
int main(void)
{
    printf("max=%u slot=%u skipped=%u\n", UINT_MAX, LAST_SLOT, SKIPPED);
#ifdef COMPARE
    return (LAST_SLOT == 0U) ? 0 : 1;
#else
    return (LAST_SLOT < UINT_MAX) ? 0 : 1;
#endif
}
