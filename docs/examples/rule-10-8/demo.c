/* 自编 C 示例（非原文） | Rule 10.8 | C99 */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint16_t ticks = 65000U, delay = 1000U;
#if defined(TYPE_PROBE)
    typedef char before_cast_is_int[__builtin_types_compatible_p(__typeof__(ticks + delay), int) ? 1 : -1];
    typedef char after_cast_is_u32[__builtin_types_compatible_p(__typeof__((uint32_t)(ticks + delay)), uint32_t) ? 1 : -1];
    (void)sizeof(before_cast_is_int); (void)sizeof(after_cast_is_u32);
#endif
#ifdef COMPARE
    uint32_t goal = (uint32_t)(ticks + delay);
#else
    uint32_t goal = (uint32_t)ticks + delay;
#endif
    printf("goal=%lu\n", (unsigned long)goal);
    return (goal == 66000UL) ? 0 : 1;
}
