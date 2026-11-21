/* 自编 C 示例（非原文） | Rule 18.7 */
#include <stdio.h>

#include <stddef.h>
#ifdef COMPARE
struct Packet { unsigned char used; unsigned char bytes[]; };
#else
struct Packet { unsigned char used; unsigned char bytes[3]; };
#endif
static unsigned copy_header(void)
{
    struct Packet a = {0}, b = {0};
    a.used = 3U;
#ifndef COMPARE
    a.bytes[2] = 9U;
#endif
    b = a;
#ifdef COMPARE
    /* No backing tail was provided; never read or write bytes[]. */
    return (unsigned)b.used;
#else
    return (unsigned)b.used + (unsigned)b.bytes[2];
#endif
}

int main(void)
{
    (void)printf("%u %u %u\n", copy_header(), (unsigned)sizeof(struct Packet), (unsigned)offsetof(struct Packet, bytes));
    return 0;
}
