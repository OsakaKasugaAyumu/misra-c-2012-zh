/* 自编 C 示例（非原文） | Dir 1.1 | C90 / C99 */
#include <limits.h>
#include <stdio.h>

#if UCHAR_MAX > INT_MAX
#error This example needs int to represent every unsigned char value
#endif

static const char *label(int sample)
{
    return (sample < 0) ? "missing" : "present";
}

int main(void)
{
    const char empty_slot = (char)-1;
    const char filled_slot = (char)0;
    (void)printf("CHAR_MIN=%d; empty=%d:%s; filled=%d:%s\n",
                 (int)CHAR_MIN, (int)empty_slot, label((int)empty_slot),
                 (int)filled_slot, label((int)filled_slot));
    return 0;
}
