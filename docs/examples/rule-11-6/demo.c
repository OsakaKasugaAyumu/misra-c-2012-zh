/* 自编 C 示例（非原文） | Rule 11.6 | C99 */
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
int main(void)
{
    void *empty = (void *)(2 - 2);
#ifdef COMPARE
    uintptr_t zero = 0U;
    void *other = (void *)zero;
    uintptr_t number = (uintptr_t)other;
    (void)number;
#endif
    printf("empty=%d\n", empty == NULL);
    return (empty == NULL) ? 0 : 1;
}
