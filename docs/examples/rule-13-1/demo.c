/* 自编 C 示例（非原文） | Rule 13.1 | C99 */
#include <stdio.h>
static unsigned int issued;
static unsigned int ticket(void) { ++issued; return issued; }
int main(void)
{
#ifdef COMPARE
    unsigned int batch[2] = { 4U, ticket() };
#else
    unsigned int saved = ticket();
    unsigned int batch[2] = { 4U, saved };
#endif
    printf("batch=%u,%u issued=%u\n", batch[0], batch[1], issued);
    return ((batch[1] == 1U) && (issued == 1U)) ? 0 : 1;
}
