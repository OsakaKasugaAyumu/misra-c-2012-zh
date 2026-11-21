/* 自编 C 示例（非原文） | Rule 21.10 */
#include <time.h>
#define READ_CLOCK clock
void names(void) { (void)READ_CLOCK; }
#if defined(WIDE_PATH)
#include <wchar.h>
void wide_name(void) { (void)wcsftime; }
#endif
