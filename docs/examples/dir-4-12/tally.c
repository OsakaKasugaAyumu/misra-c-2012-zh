/* 自编 C 示例（非原文）：三个计数器在整个运行期都存在。 */
#include "tally.h"

#define SHIFT_COUNT 3U
#define SHIFT_LIMIT 2U

static unsigned char totals[SHIFT_COUNT];

enum tally_status tally_record(unsigned int shift)
{
    if (shift >= SHIFT_COUNT) {
        return TALLY_BAD_SHIFT;
    }
    if (totals[shift] >= SHIFT_LIMIT) {
        return TALLY_FULL;
    }
    ++totals[shift];
    return TALLY_OK;
}

int tally_read(unsigned int shift)
{
    return (shift < SHIFT_COUNT) ? (int)totals[shift] : -1;
}
