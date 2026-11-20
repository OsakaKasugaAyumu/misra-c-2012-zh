/* 自编 C 示例（非原文） | Validate the type behind a 16-bit counter. */
#include <limits.h>
#include <stdio.h>

#if CHAR_BIT != 8
#error This example targets platforms with 8-bit bytes
#endif

#if defined(DEMO_WRONG_ALIAS)
/* Deliberately wrong: compile this variant only; never execute it. */
typedef unsigned char count_uint16_t;
#elif defined(DEMO_SIGNED_ALIAS)
typedef signed short count_uint16_t;
#elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#include <stdint.h>
#if !defined(UINT16_MAX)
#error This example requires an exact-width uint16_t
#endif
typedef uint16_t count_uint16_t;
#else
#if USHRT_MAX != 65535U
#error This C90 configuration needs a 16-value-bit unsigned short
#endif
typedef unsigned short count_uint16_t;
#endif

/* Both storage and unsigned range must match the promised type. */
typedef char check_count_storage[
    (sizeof(count_uint16_t) * CHAR_BIT == 16U) ? 1 : -1];
typedef char check_count_range[
    (((count_uint16_t)(-1) > 0) && ((count_uint16_t)(-1) == 65535U)) ? 1 : -1];

typedef count_uint16_t sample_count_t;

#if !defined(DEMO_WRONG_ALIAS) && !defined(DEMO_SIGNED_ALIAS)
int main(void)
{
    const sample_count_t last = 65535U;
    printf("object-bits=%u promoted-bits=%u last=%u\n",
           (unsigned int)(sizeof(last) * CHAR_BIT),
           (unsigned int)(sizeof(+last) * CHAR_BIT), (unsigned int)last);
    return (last == 65535U) ? 0 : 1;
}
#endif
