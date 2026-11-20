/* 自编 C 示例（非原文） | Rule 5.8 */
unsigned int current_lane(void);
int main(void) {
#ifdef COMPARE
    unsigned int river_lane = 6U;
    return river_lane == 3U * current_lane() ? 0 : 1;
#else
    unsigned int reserve_lane = 6U;
    return reserve_lane == 3U * current_lane() ? 0 : 1;
#endif
}
