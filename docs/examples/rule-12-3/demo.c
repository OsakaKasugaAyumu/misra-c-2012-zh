/* 自编 C 示例（非原文） | Rule 12.3 | C99 */
#include <stdio.h>
static unsigned int packs;
static unsigned int pack(unsigned int major, unsigned int minor) { ++packs; return (10U * major) + minor; }
int main(void)
{
    unsigned int seen = 0U, value;
#ifdef COMPARE
    value = pack((++seen, 4U), 2U);
#else
    ++seen;
    value = pack(4U, 2U);
#endif
    printf("marks=%u calls=%u code=%u\n", seen, packs, value);
    return ((seen == 1U) && (packs == 1U) && (value == 42U)) ? 0 : 1;
}
