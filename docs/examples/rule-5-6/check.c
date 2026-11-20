/* 自编 C 示例（非原文） | Rule 5.6 */
#include "count.h"
int main(void) {
#ifdef COMPARE
    unsigned int spool_count = spool_read();
    return spool_count == 7U ? 0 : 1;
#else
    unsigned int measured = spool_read();
    return measured == 7U ? 0 : 1;
#endif
}
