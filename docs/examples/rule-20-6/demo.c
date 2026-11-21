/* 自编 C 示例（非原文） | Rule 20.6 */
#define STORE_TAG(x) ((x) + 3)
#ifdef QUIET
# define PICKED 1
#else
# define PICKED 4
#endif
int main(void) { return STORE_TAG(PICKED); }
