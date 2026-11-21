/* 自编 C 示例（非原文） | Rule 20.6 */
/* Review only: directive-like tokens lie between the call's '(' and ')'. */
#define BUFFERED(value) ((value) + 3)
int probe(void)
{
    return BUFFERED(
#if defined(QUIET)
        1
#else
        4
#endif
    );
}
