/* 自编 C 示例（非原文） | Rule 11.2 | C99 */
#include <stdio.h>
#include <stddef.h>
struct ticket;
struct queue;
static struct ticket *empty_ticket(void) { return NULL; }
int main(void)
{
    struct ticket *t = empty_ticket();
#ifdef COMPARE
    struct queue *q = (struct queue *)t;
    (void)q;
#endif
    (void)empty_ticket();
    printf("empty=%d\n", t == NULL);
    return (t == NULL) ? 0 : 1;
}
