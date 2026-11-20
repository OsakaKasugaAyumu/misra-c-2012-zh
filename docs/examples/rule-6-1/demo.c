/* 自编 C 示例（非原文） | Rule 6.1 */
#include <stdio.h>
typedef unsigned int port_bits;
struct port {
#ifdef COMPARE
    int mode : 3;
#else
    port_bits mode : 3;
#endif
};
int main(void) { struct port p = { 3 }; printf("mode=%d\n", (int)p.mode); return p.mode == 3 ? 0 : 1; }
