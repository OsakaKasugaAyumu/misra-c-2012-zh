/* 自编 C 示例（非原文） | Rule 5.3 */
#include <stdio.h>
int main(void) {
    int retries = 1;
    {
#ifdef COMPARE
        int retries = 0;
        retries += 3;
        printf("inner=%d; ", retries);
#else
        int increment = 3;
        retries += increment;
        printf("increment=%d; ", increment);
#endif
    }
    printf("remaining=%d\n", retries);
    return retries == 4 ? 0 : 1;
}
