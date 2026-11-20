/* 自编 C 示例（非原文） | Rule 4.2 */
int main(void)
{
    const char mark[] = "?" "?!";
    return (sizeof mark == 4U && mark[0] == '?' && mark[2] == '!')
           ? 0 : 1;
}
