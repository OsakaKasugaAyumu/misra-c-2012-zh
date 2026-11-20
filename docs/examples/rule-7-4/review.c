/* 自编 C 示例（非原文） | Rule 7.4 */
/* Compile for diagnostics only. No write to a literal, no executable. */
#include <stddef.h>
char * const bound_label = "AP";
wchar_t *wide_badge = L"Q";
char *raw_badge(void) { return "AP"; }
extern void accepts_writable(char *s);
void review_badge(void) { accepts_writable("AP"); }
char (*badge_array)[3] = &"AP";
wchar_t (*wide_array)[2] = &L"Q";
