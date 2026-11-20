/* 自编 C 示例（非原文） | Rule 10.7 | C99 */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint32_t head = 100000U;
    uint16_t gap = 240U, tail = 80U;
#if defined(TYPE_PROBE)
    typedef char inner_is_int[__builtin_types_compatible_p(__typeof__(gap + tail), int) ? 1 : -1];
    typedef char wide_is_u32[__builtin_types_compatible_p(__typeof__(head + gap), uint32_t) ? 1 : -1];
    (void)sizeof(inner_is_int); (void)sizeof(wide_is_u32);
#endif
#ifdef COMPARE
    uint32_t end = head + (gap + tail);
#else
    uint32_t end = (head + gap) + tail;
#endif
    printf("end=%lu\n", (unsigned long)end);
    return (end == 100320UL) ? 0 : 1;
}
