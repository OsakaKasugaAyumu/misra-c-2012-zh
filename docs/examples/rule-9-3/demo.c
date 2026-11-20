/* 自编 C 示例（非原文） | Rule 9.3 */
int main(void)
{
#ifdef COMPARE
    int bays[4] = { 4, 6 };
#else
    int bays[4] = { 4, 6, 0, 0 };
#endif
    int empty[4] = { 0 };
    char name[6] = "NW";
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    int sparse[6] = { [2] = 4, [5] = 6 };
    if (sparse[0] != 0 || sparse[5] != 6) { return 1; }
#endif
    return bays[2] != 0 || bays[3] != 0 || empty[3] != 0 || name[5] != '\0';
}
