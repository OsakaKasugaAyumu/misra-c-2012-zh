/* 自编 C 示例（非原文） | Rule 20.4 */
/* No standard header. RED is a macro; the issue is the spelling of inline. */
#define RED 6
#define inline RED
int sample(void) { return inline; }
