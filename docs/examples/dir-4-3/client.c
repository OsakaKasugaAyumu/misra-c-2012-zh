/* 自编 C 示例（非原文） | Client: use the interface, not an instruction */
#include <stdio.h>
#include "channel_mask.h"

int main(void)
{
    unsigned int free_mask = invert_channels(0x00FF00FFU);
    unsigned int all_free = invert_channels(0U);
    printf("free=%08X all-free=%08X\n", free_mask, all_free);
    return ((free_mask == 0xFF00FF00U) &&
            (all_free == 0xFFFFFFFFU)) ? 0 : 1;
}
