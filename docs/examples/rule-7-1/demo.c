/* 自编 C 示例（非原文） | Rule 7.1 */
#include <stdio.h>
int main(void) {
    const unsigned int empty = 0;
    const char separator[] = "\011";
#ifdef COMPARE
    const unsigned int batch = 024;
#else
    const unsigned int batch = 24;
#endif
    printf("batch=%u empty=%u sep=%u\n", batch, empty, (unsigned int)separator[0]);
    return batch == 24U && empty == 0U && separator[0] == 9 ? 0 : 1;
}
