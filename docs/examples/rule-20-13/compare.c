/* 自编 C 示例（非原文） | Rule 20.13 */
#ifndef SERVICE
#define SERVICE 0
#endif
#if SERVICE
# selct this_spelling_is_invalid
#endif
int main(void) { return SERVICE; }
