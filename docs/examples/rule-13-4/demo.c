/* 自编 C 示例（非原文） | Rule 13.4 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int raw = 9U, stored = 0U, mirror = 0U, hits = 0U;
#ifdef COMPARE
    if ((stored = raw) != 0U) { ++hits; }
    mirror = stored = raw;
#else
    stored = raw;
    if (stored != 0U) { ++hits; }
    mirror = stored;
#endif
    printf("stored=%u mirror=%u hits=%u\n", stored, mirror, hits);
    return ((stored == 9U) && (mirror == 9U) && (hits == 1U)) ? 0 : 1;
}
