/* 自编 C 示例（非原文） | Rule 20.13 */
/* #not_a_directive is inside a comment. */
#ifndef SERVICE
#define SERVICE 0
#endif
# if SERVICE
#  define PICK 9
# else
#  define PICK 6
# endif
int main(void) { return PICK; }
