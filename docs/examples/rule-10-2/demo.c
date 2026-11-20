/* 自编 C 示例（非原文） | Rule 10.2 | C99 */
#include <stdio.h>
int main(void)
{
    char digit = '7';
    int ordinal = digit - '0';
#ifdef COMPARE
    int other = 7 - digit;
    (void)other;
#endif
    char next = digit + 1;
    printf("ordinal=%d next=%c\n", ordinal, next);
    return ((ordinal == 7) && (next == '8')) ? 0 : 1;
}
