/* 自编 C 示例（非原文） | Rule 13.6 | C99 */
#include <stdio.h>
int main(void)
{
    unsigned int ordinary = 3U, n = 3U;
    volatile unsigned char sample = 0U;
#ifdef COMPARE
    size_t fixed = sizeof(ordinary++);
    size_t varied = sizeof(unsigned char[n++]);
#else
    size_t fixed = sizeof(ordinary);
    size_t varied = sizeof(unsigned char[n]);
#endif
    size_t vol_size = sizeof(sample);
    printf("ordinary=%u n=%u fixed=%zu varied=%zu vol=%zu\n",ordinary,n,fixed,varied,vol_size);
    return ((ordinary == 3U) && (varied == 3U) && (vol_size == 1U)) ? 0 : 1;
}
