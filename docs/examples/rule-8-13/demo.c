/* 自编 C 示例（非原文） | Rule 8.13 */
#ifdef COMPARE
static int quota(int * const input) { return *input - 1; }
#else
static int quota(const int *input) { return *input - 1; }
#endif
static void deposit(int *input)
{
    int *alias = input;
    *alias += 2;
}
int main(void)
{
    int marks = 4;
    int before = quota(&marks);
    deposit(&marks);
    return before != 3 || marks != 6;
}
