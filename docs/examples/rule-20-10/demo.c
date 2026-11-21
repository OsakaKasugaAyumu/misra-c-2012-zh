/* 自编 C 示例（非原文） | Rule 20.10 */
#define SPELLING "pulse"
enum { pin3 = 5 };
int main(void) { return (SPELLING[0] == 'p') ? pin3 : 0; }
