/* 自编 C 示例（非原文） | Rule 1.1 */
static int zone(int key)
{
    switch (key) {
    case 4: return 1;
#ifdef COMPARE
    case 2 + 2: return 2;
#endif
    default: return 0;
    }
}
int main(void)
{
    return (zone(4) == 1 && zone(9) == 0) ? 0 : 1;
}
