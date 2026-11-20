/* 自编 C 示例（非原文） | Rule 8.12 */
#include <stdio.h>
enum port {
    feeder = 10,
#ifdef COMPARE
    sorter,
#else
    sorter = 11,
#endif
    service = 11
};
int main(void)
{
    printf("sorter=%d service=%d\n", sorter, service);
    return sorter != service;
}
