/* 自编 C 示例（非原文） | Rule 21.8 */
struct plan { int limit; };
static int gate(const struct plan *p, int count)
{ return count <= p->limit ? 0 : 1; }
int main(void)
{
    const struct plan config = {3};
    return 10*gate(&config, 4) + gate(&config, 3);
}
