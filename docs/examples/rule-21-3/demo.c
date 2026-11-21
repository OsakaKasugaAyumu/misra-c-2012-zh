/* 自编 C 示例（非原文） | Rule 21.3 */
struct bins { unsigned char cell[2]; unsigned int used; };
static int push(struct bins *p, unsigned char x)
{
    if (p->used == 2U) { return 0; }
    p->cell[p->used++] = x;
    return 1;
}
int main(void)
{
    struct bins q = {{0U, 0U}, 0U};
    int a = push(&q, 3U); int b = push(&q, 4U); int c = push(&q, 5U);
    return 10*a + b + c;
}
