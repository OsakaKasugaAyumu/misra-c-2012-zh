/* 自编 C 示例（非原文） | Rule 22.1 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    const char *mode = (argc > 1) ? argv[1] : "ok";
    void *buffer = strcmp(mode,"nomem")==0 ? NULL : malloc(8U);
    FILE *stream; int early;
    if (buffer == NULL) { puts("M1 not-acquired"); return 1; }
    puts("M1 acquired");
    stream = fopen(strcmp(mode,"nofile")==0 ? "absent.b11" : "demo.c", "r");
    if (stream == NULL) { puts("S2 not-acquired"); free(buffer); puts("M1 released"); return 2; }
    puts("S2 acquired"); early = strcmp(mode,"early")==0;
    if (!early) { ((unsigned char *)buffer)[0] = 3U; }
    if (fclose(stream)!=0) { free(buffer); return 4; }
    puts("S2 closed"); free(buffer); puts("M1 released"); return early ? 3 : 0;
}
