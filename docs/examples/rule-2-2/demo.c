/* 自编 C 示例（非原文） | Rule 2.2 */
static unsigned int advance(unsigned int mark)
{
#ifdef COMPARE
    mark + 3U;
#endif
    return mark + 1U;
}
int main(void)
{
    return advance(7U) == 8U ? 0 : 1;
}
