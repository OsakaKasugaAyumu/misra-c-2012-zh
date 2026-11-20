/* 自编 C 示例（非原文） | Rule 8.6 */
#include "stock.h"
#ifdef COMPARE
int stock_floor; /* Tentative definition in the consumer. */
#endif
int main(void) { return stock_floor != 11; }
