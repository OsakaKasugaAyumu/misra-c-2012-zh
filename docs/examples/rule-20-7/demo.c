/* 自编 C 示例（非原文） | Rule 20.7 */
#define TRIPLE_TERM(t) (3 * (t))
#define RELAY(t) TRIPLE_TERM(t)
#define PRODUCT(t) (3 * t)
#define FIELD(rec, key) ((rec).key)
struct limits { int soft; };
int main(void)
{
    struct limits cfg = { 4 };
#ifdef LOOSE
    return PRODUCT(2 + FIELD(cfg, soft));
#elif defined(CALLER_PARENS)
    return PRODUCT((2 + FIELD(cfg, soft)));
#else
    return RELAY(2 + FIELD(cfg, soft));
#endif
}
