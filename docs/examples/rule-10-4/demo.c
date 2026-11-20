/* 自编 C 示例（非原文） | Rule 10.4 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int tokens = 3U;
    int delta = -1;
#ifdef COMPARE
    int less = delta < tokens;
#else
    int less = (delta < 0) || ((unsigned int)delta < tokens);
#endif
    printf("less=%d\n", less);
    return (less != 0) ? 0 : 1;
}
