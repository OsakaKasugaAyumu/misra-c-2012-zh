/* 自编 C 示例（非原文） | Rule 7.2 */
#include <limits.h>
#include <stdio.h>
#if UINT_MAX != 4294967295U
#error This observation needs a 32-value-bit unsigned int
#endif
#ifdef COMPARE
#define CEILING 0xffffffff
#else
#define CEILING 0xffffffffU
#endif
#if CEILING > -1
#define PP_GREATER 1
#else
#define PP_GREATER 0
#endif
int main(void) {
    printf("uint_bits=%u int_bits=%u long_bits=%u unsigned_int=%d pp_greater=%d\n",
       (unsigned int)(sizeof(unsigned int)*CHAR_BIT), (unsigned int)(sizeof(int)*CHAR_BIT),
       (unsigned int)(sizeof(long)*CHAR_BIT), __builtin_types_compatible_p(__typeof__(CEILING), unsigned int), PP_GREATER);
    return __builtin_types_compatible_p(__typeof__(CEILING), unsigned int) ? 0 : 1;
}
