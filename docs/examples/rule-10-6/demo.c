/* 自编 C 示例（非原文） | Rule 10.6 | C99 */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint16_t elapsed = 60000U, extra = 6000U;
#if defined(TYPE_PROBE)
    typedef char narrow_sum_is_int[__builtin_types_compatible_p(__typeof__(elapsed + extra), int) ? 1 : -1];
    typedef char wide_sum_is_u32[__builtin_types_compatible_p(__typeof__((uint32_t)elapsed + extra), uint32_t) ? 1 : -1];
    (void)sizeof(narrow_sum_is_int); (void)sizeof(wide_sum_is_u32);
#endif
#ifdef COMPARE
    uint32_t total = elapsed + extra;
#else
    uint32_t total = (uint32_t)elapsed + extra;
#endif
    printf("total=%lu\n", (unsigned long)total);
    return (total == 66000UL) ? 0 : 1;
}
