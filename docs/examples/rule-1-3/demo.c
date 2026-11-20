/* 自编 C 示例（非原文） | Rule 1.3 */
static unsigned int tiles(unsigned int pixels, unsigned int width)
{
    if (width == 0U) {
        return 0U;
    }
    return pixels / width;
}
int main(void)
{
    unsigned int w;
    for (w = 0U; w < 16U; ++w) {
        if (tiles(60U, w) != ((w == 0U) ? 0U : (60U / w))) {
            return 1;
        }
    }
    return 0;
}
