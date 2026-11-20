/* 自编 C 示例（非原文） | Rule 5.7 */
#include "station.h"
unsigned int station_mask(void) { bay_bits m = {3U}; return m.mask; }
