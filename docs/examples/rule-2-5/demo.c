/* 自编 C 示例（非原文） | Rule 2.5 */
#define ROW_WIDTH 6U
#ifdef COMPARE
#define OLD_PITCH 8U
#endif
int main(void)
{
    unsigned int cells = 2U * ROW_WIDTH;
    return cells == 12U ? 0 : 1;
}
