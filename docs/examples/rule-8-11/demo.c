/* 自编 C 示例（非原文） | Rule 8.11 */
#include "slices.h"
int main(void)
{
#ifdef MEASURE
    return sizeof rack_sizes / sizeof rack_sizes[0] != 3;
#else
    return rack_sizes[2] != 8;
#endif
}
