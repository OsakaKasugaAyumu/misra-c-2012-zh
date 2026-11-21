/* 自编 C 示例（非原文） | Rule 22.4 */
#include <stdio.h>
struct stream_view { FILE *fp; int writable; };
static int send_marker(const struct stream_view *s)
{
    if (!s->writable) { puts("S1 write refused before fputc"); return 1; }
    return fputc('K',s->fp) == EOF ? 2 : 0;
}
int main(void)
{
    struct stream_view r; int status; r.fp = fopen("demo.c","r"); r.writable=0;
    if (r.fp == NULL) { return 2; } puts("S1 open:r"); status=send_marker(&r);
    if (fclose(r.fp)!=0) { return 3; } puts("S1 closed"); return status;
}
