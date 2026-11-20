/* 自编 C 示例（非原文） | Rule 5.9 */
#include "pulse.h"
static unsigned int west_pulse = 5U;
unsigned int west_read(void) { return pulse_next(west_pulse); }
