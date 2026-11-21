/* 自编 C 示例（非原文） | Rule 21.11 */
#include <math.h>
int main(void)
{
    volatile float sample = -0.75F;
    return fabsf(sample) == 0.75F ? 7 : 0;
}
