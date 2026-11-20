/* 自编 C 示例（非原文）：直接包含与间接包含在此相遇。 */
#include "record.h"
#include "frame.h"
#include <stdio.h>

int main(void)
{
    struct capture_record record = { 17U };
    struct capture_frame frame;
    frame.first = record;
    if (printf("first=%u\n", frame.first.sequence) < 0) {
        return 2;
    }
    return (frame.first.sequence == 17U) ? 0 : 1;
}
