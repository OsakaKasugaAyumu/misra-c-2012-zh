/* 自编 C 示例（非原文） | Rule 11.1 | C99 */
#include <stdio.h>
#include <stddef.h>
typedef unsigned int (*reader)(unsigned int);
static unsigned int bump(unsigned int n) { return n + 1U; }
int main(void)
{
    reader readout = bump;
    reader absent = NULL;
#ifdef COMPARE
    typedef double (*other)(double);
    other altered = (other)readout;
    (void)altered; /* Syntax only. Never call it. */
#endif
    (void)readout;
    printf("read=%u empty=%d\n", readout(2U), absent == NULL);
    return ((readout(2U) == 3U) && (absent == NULL)) ? 0 : 1;
}
