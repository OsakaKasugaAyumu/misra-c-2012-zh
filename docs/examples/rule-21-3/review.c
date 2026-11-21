/* 自编 C 示例（非原文） | Rule 21.3 */
#include <stdlib.h>
#define HEAP_START calloc
#define HEAP_RESIZE realloc
#define HEAP_END free
void inspect(void) { (void)malloc; (void)HEAP_START; (void)HEAP_RESIZE; (void)HEAP_END; }
