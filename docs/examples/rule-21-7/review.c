/* 自编 C 示例（非原文） | Rule 21.7 */
#include <stdlib.h>
void names(void) { (void)atof; (void)atoi; (void)atol;
#if defined(C99_PATH)
    (void)atoll;
#endif
}
