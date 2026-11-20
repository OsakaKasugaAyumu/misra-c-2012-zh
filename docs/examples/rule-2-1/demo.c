/* 自编 C 示例（非原文） | Rule 2.1 */
static unsigned int lane(unsigned int key)
{
    unsigned int slot = key & 3U;
#ifdef COMPARE
    if (slot == 4U) {
        return 99U;
    }
#endif
    return slot;
}
int main(void)
{
    unsigned int i;
    for (i = 0U; i < 16U; ++i) {
        if (lane(i) != (i % 4U)) { return 1; }
    }
    return 0;
}
