/* 自编 C 示例（非原文） | Rule 14.1 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int samples = 0U;
    float position = 0.0F;
#ifdef COMPARE
    /* Limit iterations even if this floating-point model changes. */
    while ((position < 1.0F) && (samples < 200U)) { ++samples; position += 0.01F; }
#else
    for (unsigned int i = 0U; i < 100U; ++i) { position = (float)(i + 1U) / 100.0F; ++samples; }
#endif
    printf("samples=%u last=%.6f\n",samples,(double)position);
    return (samples < 200U) ? 0 : 1;
}
