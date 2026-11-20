/* 自编 C 示例（非原文） | Rule 1.2 */
static unsigned int add_fee(unsigned int base)
{
#ifdef COMPARE
    return ({ unsigned int fee = 2U; base + fee; });
#else
    return base + 2U;
#endif
}
int main(void)
{
    return add_fee(5U) == 7U ? 0 : 1;
}
