/* 自编 C 示例（非原文） | Rule 8.7 */
#include "fuses.h"
#ifdef COMPARE
int reserve_fuses = 8;
#else
static int reserve_fuses = 8;
#endif
int fuse_limit(void) { return reserve_fuses - 2; }
