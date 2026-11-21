/* 自编 C 示例（非原文） | Rule 21.4 */
static int fetch(int ready, int *sample)
{
    if (!ready) { return 1; }
    *sample = 3; return 0;
}
int main(void)
{
    int value = 0; int failure = fetch(0, &value); int ok = fetch(1, &value);
    return 10*failure + ok + value;
}
