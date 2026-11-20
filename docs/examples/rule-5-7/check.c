/* 自编 C 示例（非原文） | Rule 5.7 */
#include "station.h"
int main(void) {
#ifdef COMPARE
    struct bay_bits { unsigned int rack; } tray = {4U};
#else
    struct rack_cell { unsigned int rack; } tray = {4U};
#endif
    return station_mask() + tray.rack == 7U ? 0 : 1;
}
