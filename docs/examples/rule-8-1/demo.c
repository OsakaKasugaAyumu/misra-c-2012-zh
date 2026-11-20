/* 自编 C 示例（非原文） | Rule 8.1 */
#include <stdio.h>
#ifdef COMPARE
static stamp;
static mark(const delta) { return stamp + delta; }
#else
static int stamp;
static int mark(const int delta) { return stamp + delta; }
#endif
int main(void)
{
    int result = mark(12);
    printf("mark=%d\n", result);
    return result != 12;
}
