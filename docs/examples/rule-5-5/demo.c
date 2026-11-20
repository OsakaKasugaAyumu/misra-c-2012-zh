/* 自编 C 示例（非原文） | Rule 5.5 */
#define RIM_DEPTH 6U
enum { mold_depth = RIM_DEPTH };
#undef RIM_DEPTH
int main(void) {
#ifdef COMPARE
    int RIM_DEPTH = 2;
    return mold_depth - RIM_DEPTH == 4 ? 0 : 1;
#else
    int allowance = 2;
    return mold_depth - allowance == 4 ? 0 : 1;
#endif
}
