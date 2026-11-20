/* 自编 C 示例（非原文）：由 Codex 为本项目独立编写；不是原书示例，也不是官方合规证明。 */
#include <stdio.h>
#include "tabs.h"

int main(void)
{
    int failures = 0;
    failures += (tab_for_card(0U) != 0U);
    failures += (tab_for_card(7U) != 7U);
    failures += (tab_for_card(8U) != 0U);
    failures += (tab_for_card(19U) != 3U);
    (void)printf("tab checks: %d/4 passed\n", 4 - failures);
    return (failures == 0) ? 0 : 1;
}
