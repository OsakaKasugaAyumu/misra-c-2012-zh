/* 自编 C 示例（非原文） | Rule 20.9 */
#if defined(UNGUARDED)
# if PORT_ID == 0
#  define TAG 1
# else
#  define TAG 2
# endif
#elif defined(PORT_ID) && (PORT_ID == 0)
# define TAG 3
#elif defined(PORT_ID)
# define TAG 4
#else
# define TAG 5
#endif
int main(void) { return TAG; }
