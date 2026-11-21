/* 自编 C 示例（非原文） | Rule 22.6 */
#include <stdio.h>
struct ticket { unsigned int id; int open; };
int main(void)
{
    struct ticket t={7U,0}; FILE *stream=fopen("demo.c","r"), *reader;
    if (stream==NULL) { return 1; } t.open=1; reader=stream;
    printf("S%u opened\n",t.id);
    if (fgetc(reader)==EOF) { (void)fclose(stream); return 2; }
    if (fclose(stream)!=0) { return 3; } t.open=0;
    printf("S%u closed; alias not evaluated\n",t.id); return t.open;
}
