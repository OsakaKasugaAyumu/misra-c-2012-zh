/* 自编 C 示例（非原文） | Rule 2.7 */
static unsigned int total(unsigned int fixed, unsigned int extra)
{
#ifdef COMPARE
    return fixed;
#else
    return fixed + extra;
#endif
}
int main(void)
{
    return total(3U, 2U) == 5U ? 0 : 1;
}
