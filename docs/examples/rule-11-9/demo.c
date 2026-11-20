/* 自编 C 示例（非原文） | Rule 11.9 | C99 */
#include <stdio.h>
#include <stddef.h>
#define LOCAL_ZERO 0
int main(void)
{
    unsigned int item = 13U;
    unsigned int *live = &item;
#ifdef COMPARE
    unsigned int *absent = LOCAL_ZERO;
    int eq = live != LOCAL_ZERO;
    unsigned int *left = eq ? LOCAL_ZERO : live;
    unsigned int *right = eq ? live : LOCAL_ZERO;
#else
    unsigned int *absent = NULL;
    int eq = live != NULL;
    unsigned int *left = eq ? NULL : live;
    unsigned int *right = eq ? live : NULL;
#endif
    unsigned int *also_empty = (void *)0;
    int ok = (absent == NULL) && (left == NULL) && (right == live) && (also_empty == NULL);
    printf("ok=%d\n", ok);
    return ok ? 0 : 1;
}
