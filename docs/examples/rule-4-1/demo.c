/* 自编 C 示例（非原文） | Rule 4.1 */
int main(void)
{
#ifdef COMPARE
    const char frame[] = "\x02a";
#else
    const char frame[] = "\x02" "a";
#endif
    return (sizeof frame == 3U && frame[0] == 2 && frame[1] == 'a')
           ? 0 : 1;
}
