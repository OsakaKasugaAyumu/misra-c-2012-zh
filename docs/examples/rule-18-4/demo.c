/* 自编 C 示例（非原文） | Rule 18.4 */
#include <stdio.h>

static unsigned pick(unsigned index)
{
    const unsigned slots[4] = {2U, 6U, 9U, 13U};
    const unsigned *cursor = &slots[0];
    unsigned selected = 0U;
    ++cursor;
    if (index < 3U) {
#ifdef COMPARE
        selected = *(cursor + index);
#else
        selected = cursor[index];
#endif
    }
    return selected + (unsigned)(cursor - slots);
}

int main(void)
{
    (void)printf("%u %u %u\n", pick(0U), pick(2U), pick(3U));
    return 0;
}
