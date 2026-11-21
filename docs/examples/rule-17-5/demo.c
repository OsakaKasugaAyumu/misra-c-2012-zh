/* 自编 C 示例（非原文） | Rule 17.5 */
#include <stdio.h>

static unsigned checksum(const unsigned window[3])
{
    return window[0] + window[1] + window[2];
}
static unsigned frame(void)
{
    const unsigned buffer[4] = {1U, 3U, 5U, 7U};
#ifdef COMPARE
    return checksum(&buffer[2]);
#else
    return checksum(&buffer[1]);
#endif
}

int main(void)
{
    (void)printf("%u\n", frame());
    return 0;
}
