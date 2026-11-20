/* 自编 C 示例（非原文） | Rule 9.4 */
#include <stdio.h>
struct ticket { int bin; int shelf; };
int main(void)
{
#ifdef COMPARE
    struct ticket route = { .bin = 4, .shelf = 8, .bin = 6 };
    int loads[3] = { [2] = 1, [2] = 3 };
#else
    struct ticket route = { .shelf = 8, .bin = 6 };
    int loads[3] = { [2] = 3 };
#endif
    printf("bin=%d loads2=%d\n", route.bin, loads[2]);
    return route.bin != 6 || loads[2] != 3;
}
