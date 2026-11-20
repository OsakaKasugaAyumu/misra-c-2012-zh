/* 自编 C 示例（非原文） | Rule 7.4 */
#include <stddef.h>
static const char *badge(void) { return "AP"; }
static int visible(const char *p) { return p[0] == 'A'; }
int main(void) {
    const wchar_t *wide = L"Q";
    return visible(badge()) && wide[0] == L'Q' ? 0 : 1;
}
