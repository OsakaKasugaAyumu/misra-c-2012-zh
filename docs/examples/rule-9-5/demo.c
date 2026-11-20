/* 自编 C 示例（非原文） | Rule 9.5 */
#include <stdio.h>
#ifdef EXTEND
#define LAST 6
#else
#define LAST 3
#endif
#ifdef COMPARE
static const int spaces[] = { [LAST] = 9, [1] = 3 };
#else
static const int spaces[5] = { [LAST] = 9, [1] = 3 };
#endif
int main(void)
{
    printf("size=%lu last=%d\n", (unsigned long)(sizeof spaces / sizeof spaces[0]), spaces[LAST]);
    return spaces[LAST] != 9;
}
