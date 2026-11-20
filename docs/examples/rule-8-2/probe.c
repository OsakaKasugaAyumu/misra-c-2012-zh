/* 自编 C 示例（非原文） | Rule 8.2 */
#ifdef COMPARE
int room();
#else
int room(void);
#endif
int probe(void) { return room(4); } /* Diagnostic probe only; never linked or run. */
