/* 自编 C 示例（非原文） | Rule 11.4 | C99 */
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
int main(void)
{
    unsigned int slot = 31U;
    unsigned int *ref = &slot;
    unsigned int *missing = NULL;
#ifdef COMPARE
    uintptr_t encoded = (uintptr_t)ref;
    unsigned int *again = (unsigned int *)encoded;
    (void)again;
#endif
    printf("slot=%u missing=%d\n", *ref, missing == NULL);
    return ((*ref == 31U) && (missing == NULL)) ? 0 : 1;
}
