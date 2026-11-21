/* 自编 C 示例（非原文） | Rule 20.14 */
#ifndef ACTIVE
#define ACTIVE 1
#endif
#if ACTIVE
# include "level.h"
#elif defined(IDLE)
# define LEVEL 3
#else
# define LEVEL 1
#endif
int main(void) { return LEVEL; }
