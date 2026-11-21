/* 自编 C 示例（非原文） | Rule 20.5 */
#define SLOT_FIRST 11
#undef SLOT_FIRST
#define SLOT_FIRST 23
#define SLOT_NEXT SLOT_FIRST
int main(void) { return SLOT_FIRST + SLOT_NEXT; }
