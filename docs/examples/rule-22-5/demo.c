/* 自编 C 示例（非原文） | Rule 22.5 */
#include <stdio.h>
int main(void)
{
    FILE *stream = fopen("demo.c","r"), *reader; int byte;
    if (stream == NULL) { return 1; } reader=stream; puts("S1 handle copied");
    byte=fgetc(reader); puts("S1 consumed via API");
    if (fclose(stream)!=0) { return 2; } puts("S1 closed"); return byte=='/' ? 0 : 3;
}
