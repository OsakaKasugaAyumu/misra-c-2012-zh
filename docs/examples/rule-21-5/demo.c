/* 自编 C 示例（非原文） | Rule 21.5 */
struct tick { unsigned int pending; };
static void enqueue(struct tick *t) { t->pending = 1U; }
static int service(struct tick *t)
{
    int had = (int)t->pending; t->pending = 0U; return had;
}
int main(void)
{
    struct tick t = {0U}; int first; enqueue(&t); first = service(&t);
    return first*10 + service(&t);
}
