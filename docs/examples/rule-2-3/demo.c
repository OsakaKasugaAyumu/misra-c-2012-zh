/* 自编 C 示例（非原文） | Rule 2.3 */
typedef unsigned int tick_count_t;
#ifdef COMPARE
typedef unsigned int spare_tick_t;
#endif
int main(void)
{
    tick_count_t interval = 3U;
    return interval == 3U ? 0 : 1;
}
