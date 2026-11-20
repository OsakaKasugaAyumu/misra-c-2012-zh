/* 自编 C 示例（非原文） | Rule 2.6 */
static int flush_status(void)
{
#ifdef COMPARE
ready_to_flush:
#endif
    return 3;
}
int main(void)
{
    return flush_status() == 3 ? 0 : 1;
}
