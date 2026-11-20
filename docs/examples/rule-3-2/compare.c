/* 自编 C 示例（非原文） | Rule 3.2 */
int main(void)
{
    unsigned int lamps = 0U;
    // track the next lamp \
    lamps += 4U;
    return lamps == 4U ? 0 : 1;
}
