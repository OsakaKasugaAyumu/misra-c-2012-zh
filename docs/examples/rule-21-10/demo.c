/* 自编 C 示例（非原文） | Rule 21.10 */
static int due(unsigned int now, unsigned int deadline) { return now >= deadline; }
int main(void) { return due(19U,20U)*100 + due(20U,20U)*10 + due(21U,20U); }
