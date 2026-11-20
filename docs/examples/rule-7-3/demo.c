/* 自编 C 示例（非原文） | Rule 7.3 */
#include <stdio.h>
int main(void) {
#ifdef COMPARE
    long depth = 21l;
    long double gain = 0.5l;
#else
    long depth = 21L;
    long double gain = 0.5L;
#endif
    printf("depth=%ld doubled=%d\n", depth, (int)(gain * 2));
    return depth == 21 && gain * 2 == 1 ? 0 : 1;
}
