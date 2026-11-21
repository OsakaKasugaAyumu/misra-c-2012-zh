/* 自编 C 示例（非原文） | Rule 21.6 */
#include <stdio.h>
#define EMIT fputs
void narrow(FILE *p) { (void)EMIT("edge", p); }
#if defined(WIDE_PATH)
#include <wchar.h>
void wide(FILE *p) { (void)fputws(L"edge", p); }
#endif
