/* 自编 C 示例（非原文） | Dir 2.1 | C90 / C99 */
#include "quota.h"
#include <stdio.h>

int main(void)
{
    const unsigned int granted = quota_take(7U);
    (void)printf("requested=7 granted=%u\n", granted);
    return (granted == 4U) ? 0 : 1;
}
