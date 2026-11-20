/* 自编 C 示例（非原文） | Rule 11.5 | C99 */
#include <stdio.h>
#include <stddef.h>
int main(void)
{
    unsigned int channel = 9U;
    unsigned int *typed = &channel;
    void *opaque = typed;
    unsigned int *empty = (void *)0;
#ifdef COMPARE
    unsigned int *implicit = opaque;
    unsigned int *explicit_value = (unsigned int *)opaque;
    (void)implicit; (void)explicit_value;
#endif
    printf("channel=%u present=%d empty=%d\n", *typed, opaque != NULL, empty == NULL);
    return ((*typed == 9U) && (opaque != NULL) && (empty == NULL)) ? 0 : 1;
}
