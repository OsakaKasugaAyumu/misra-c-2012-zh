/* 自编 C 示例（非原文） | Rule 21.1 */
#define PANEL_ROWS 3
#define NDEBUG
#if defined(PANEL_ROWS)
int main(void) { return PANEL_ROWS; }
#endif
