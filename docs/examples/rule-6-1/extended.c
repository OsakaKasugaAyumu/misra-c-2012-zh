/* 自编 C 示例（非原文） | Rule 6.1 | GCC C99 implementation test only */
struct dial_port { signed long notch : 4; };
int main(void) { struct dial_port p = {-2}; return p.notch == -2 ? 0 : 1; }
