/* 自编 C 示例（非原文） | Rule 20.8 */
#ifndef LEVEL
#define LEVEL 0
#endif
#ifndef BACKUP
#define BACKUP 1
#endif
#if LEVEL
# define SOURCE 5
#elif BACKUP
# define SOURCE 3
#else
# define SOURCE 2
#endif
#if 0
# if 7
#  define OMITTED 1
# endif
#endif
int main(void) { return SOURCE; }
