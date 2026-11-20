/* 自编 C 示例（非原文） | One replaceable mask implementation */
#include <limits.h>
#include "channel_mask.h"

#if UINT_MAX != 0xFFFFFFFFU
#error This example needs 32 value bits in unsigned int
#endif
#ifndef USE_X86_MASK
#define USE_X86_MASK 0
#endif
#if USE_X86_MASK && !(defined(__GNUC__) && defined(__x86_64__))
#error The selected backend needs GCC-compatible x86-64 assembly
#endif

unsigned int invert_channels(unsigned int mask)
{
#if USE_X86_MASK
    __asm__("notl %0" : "+r" (mask));
    return mask;
#else
    return ~mask;
#endif
}
