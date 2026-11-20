/* 自编 C 示例（非原文）：由 Codex 为本项目独立编写；不是原书示例，也不是官方合规证明。 */
#include <limits.h>
#include <stdio.h>
#include "box.h"

int main(void)
{
    int failures = 0;
    failures += (box_free_slots(0U) != 12U);           /* B01 */
    failures += (box_free_slots(11U) != 1U);           /* B02 */
    failures += (box_free_slots(12U) != 0U);           /* B03 */
    failures += (box_free_slots(13U) != 0U);           /* B04 */
    failures += (box_free_slots(UINT_MAX) != 0U);      /* B05 */
    (void)printf("box checks: %d/5 passed\n", 5 - failures);
    return (failures == 0) ? 0 : 1;
}
