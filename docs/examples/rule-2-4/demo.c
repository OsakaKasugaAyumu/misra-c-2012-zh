/* 自编 C 示例（非原文） | Rule 2.4 */
#ifdef COMPARE
typedef struct rack_marker {
#else
typedef struct {
#endif
    unsigned int width;
} rack_t;
int main(void)
{
    rack_t one = { 4U };
    return one.width == 4U ? 0 : 1;
}
