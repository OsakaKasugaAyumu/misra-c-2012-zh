/* 自编 C 示例（非原文） | Rule 8.3 */
#include "marks.h"
#ifdef COMPARE
int spare(const tick_t * taken, signed int maximum)
{ return maximum - *taken; }
#else
int spare(const tick_t * const used, signed int capacity)
{ return capacity - *used; }
#endif
