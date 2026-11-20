/* 自编 C 示例（非原文） | Rule 5.9 */
#include "pulse.h"
unsigned int west_read(void);
#ifdef COMPARE
static unsigned int west_pulse = 1U;
#else
static unsigned int east_pulse = 1U;
#endif
int main(void) {
#ifdef COMPARE
    return west_read() == 6U && pulse_next(west_pulse) == 2U ? 0 : 1;
#else
    return west_read() == 6U && pulse_next(east_pulse) == 2U ? 0 : 1;
#endif
}
