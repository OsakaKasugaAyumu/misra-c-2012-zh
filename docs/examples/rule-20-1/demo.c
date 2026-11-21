/* 自编 C 示例（非原文） | Rule 20.1 */
/* A directive and a comment may precede the first include. */
#define READER_REV 3
#include "tick.h"
static const int baseline = 4;
int main(void) { return baseline + TICK_UNIT; }
