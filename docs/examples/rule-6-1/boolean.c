/* 自编 C 示例（非原文） | Rule 6.1 */
struct beacon { _Bool hot : 1; };
int main(void) { struct beacon b = { 1 }; return b.hot ? 0 : 1; }
