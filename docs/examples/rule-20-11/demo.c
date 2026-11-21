/* 自编 C 示例（非原文） | Rule 20.11 */
#define QUOTE_NAME(item) #item
#define MERGE_NAME(head, tail) head ## tail
enum { METER_2 = 8 };
int main(void)
{
    return (QUOTE_NAME(green)[0] == 'g') ? MERGE_NAME(METER_, 2) : 0;
}
