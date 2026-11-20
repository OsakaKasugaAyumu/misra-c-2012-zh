/* 自编 C 示例（非原文） | Rule 8.5 */
#ifdef COMPARE
extern int shelf_quota;
#else
#include "quota.h"
#endif
int main(void) { return shelf_quota != 14; }
