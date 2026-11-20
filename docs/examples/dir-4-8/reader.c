/* 自编 C 示例（非原文） | Client: observe the meter only through its API. */
#include <stdio.h>
#include "meter.h"

int main(void)
{
    const unsigned int expected[] = { 0U, 1U, 2U, 3U, 3U };
    struct meter *handle = meter_reset();
    unsigned int i;
    for (i = 0U; i < 5U; ++i) {
        unsigned int visible = meter_count(handle);
        if (visible != expected[i]) { return 1; }
        if (printf("marks=%u\n", visible) < 0) { return 2; }
        if (i < 4U) { meter_mark(handle); }
    }
    return 0;
}
