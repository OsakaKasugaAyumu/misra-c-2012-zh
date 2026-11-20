/* 自编 C 示例（非原文） | Rule 10.3 | C99 */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint16_t count = 260U;
    uint8_t limit = 12;
    uint8_t slots[2] = { 0 };
#ifdef COMPARE
    slots[0] = count;
#else
    if (count <= UINT8_MAX) { slots[0] = (uint8_t)count; }
#endif
    printf("stored=%u limit=%u\n", (unsigned int)slots[0], (unsigned int)limit);
    return (slots[0] == 0U) ? 0 : 1;
}
