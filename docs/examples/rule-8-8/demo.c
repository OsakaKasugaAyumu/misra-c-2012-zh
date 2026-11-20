/* 自编 C 示例（非原文） | Rule 8.8 */
static int cap = 6;
static int headroom(int used);
#ifdef COMPARE
extern int cap;
int headroom(int used)
#else
static int cap;
static int headroom(int used)
#endif
{ return cap - used; }
int main(void) { return headroom(2) != 4; }
