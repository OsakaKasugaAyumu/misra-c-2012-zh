/* 自编 C 示例（非原文）：由 Codex 为本项目独立编写；不是原书示例，也不是官方合规证明。 */
#include "box.h"

#define BOX_CAPACITY 12U

unsigned int box_free_slots(unsigned int occupied)
{
    if (occupied >= BOX_CAPACITY) { /* BOX-02: full or above capacity */
        return 0U;
    }
    return BOX_CAPACITY - occupied; /* BOX-01: count unused slots */
}
