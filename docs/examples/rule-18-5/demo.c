/* 自编 C 示例（非原文） | Rule 18.5 */
#include <stdio.h>

typedef unsigned *Cell;
#ifdef COMPARE
static unsigned read_cell(Cell *slots[]) /* adjusted: unsigned *** */
{
    return **slots[0];
}
#else
static unsigned read_cell(Cell slots[]) /* adjusted: unsigned ** */
{
    return *slots[0];
}
#endif
static unsigned test(void)
{
    unsigned value = 7U;
    Cell p = &value;
#ifdef COMPARE
    Cell *table[1]; /* array of unsigned **, not itself unsigned *** */
    table[0] = &p;
#else
    Cell table[1];
    table[0] = p;
#endif
    return read_cell(table);
}

int main(void)
{
    (void)printf("%u\n", test());
    return 0;
}
