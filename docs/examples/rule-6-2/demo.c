/* 自编 C 示例（非原文） | Rule 6.2 */
struct latch {
    unsigned int : 1;
#ifdef COMPARE
    signed int ready : 1;
#else
    unsigned int ready : 1;
#endif
};
int main(void) {
    struct latch latch_state = {0};
#ifndef COMPARE
    latch_state.ready = 1U;
    return latch_state.ready == 1U ? 0 : 1;
#else
    return latch_state.ready != 0;
#endif
}
