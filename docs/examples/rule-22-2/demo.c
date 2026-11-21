/* 自编 C 示例（非原文） | Rule 22.2 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
static void *resize(void *p, int refuse) { return refuse ? NULL : realloc(p,16U); }
int main(int argc, char **argv)
{
    unsigned char *owner = malloc(8U), *view, *next;
    if (owner == NULL) { return 3; }
    view = owner; view[0] = 7U; puts("M1 acquired; owner/view share block");
    next = resize(owner,argc>1 && strcmp(argv[1],"refuse")==0);
    if (next == NULL) { puts("M1 retained"); free(owner); puts("M1 released"); return 1; }
    puts("M1 retired; M2 acquired");
    if (next[0]!=7U) { free(next); return 2; }
    free(next); puts("M2 released"); return 0;
}
