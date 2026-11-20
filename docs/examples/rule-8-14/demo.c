/* 自编 C 示例（非原文） | Rule 8.14 */
#include <string.h>
#ifdef COMPARE
#define LANE restrict
#else
#define LANE
#endif
static void checkpoint(int *LANE result, const int *LANE sample)
{ *result = *sample + 3; }
int main(void)
{
    int batch = 5;
    int saved = 0;
    int copy = 0;
    checkpoint(&saved, &batch);
    memcpy(&copy, &saved, sizeof copy);
    return copy != 8;
}
