/* 自编 C 示例（非原文） | Rule 9.2 */
#include <stdio.h>
struct region { int span[2]; };
int main(void)
{
#ifdef COMPARE
    struct region bins[2] = { 3, 7, 4, 9 };
#else
    struct region bins[2] = { { { 3, 7 } }, { { 4, 9 } } };
#endif
    struct region empty = { 0 };
    struct region copy = bins[0];
    char tag[] = "NE";
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    struct region corner = { .span[1] = 9 };
    if (corner.span[0] != 0 || corner.span[1] != 9) { return 1; }
#endif
    printf("copy=%d last=%d\n", copy.span[1], bins[1].span[1]);
    return copy.span[1] != 7 || empty.span[0] != 0 || tag[1] != 'E' || bins[1].span[1] != 9;
}
