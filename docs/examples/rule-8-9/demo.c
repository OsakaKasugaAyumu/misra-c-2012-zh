/* 自编 C 示例（非原文） | Rule 8.9 */
#ifdef COMPARE
static int serial = 100;
#endif
static int issue(void)
{
#ifndef COMPARE
    static int serial = 100;
#endif
    serial += 3;
    return serial;
}
int main(void)
{
    int first = issue();
    int second = issue();
    return first != 103 || second != 106;
}
