/* 自编 C 示例（非原文） | Rule 11.3 | C99 */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint32_t word = UINT32_MAX;
    const unsigned char *bytes = (const unsigned char *)&word;
#ifdef COMPARE
    const uint16_t *halves = (const uint16_t *)&word;
    (void)halves; /* Not dereferenced. */
#endif
    printf("byte=%u\n", (unsigned int)bytes[0]);
    return (bytes[0] == 255U) ? 0 : 1;
}
