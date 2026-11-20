/* 自编 C 示例（非原文） | Rule 8.2 */
#ifdef COMPARE
static int credit();
typedef int (*reader)(int);
static int empty();
#else
static int credit(int slots);
typedef int (*reader)(int slots);
static int empty(void);
#endif
static int credit(int slots) { return slots + 2; }
static int empty(void) { return 0; }
int main(void)
{
    reader read_slots = credit;
    return read_slots(3) != 5 || empty() != 0;
}
