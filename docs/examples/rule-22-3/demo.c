/* 自编 C 示例（非原文） | Rule 22.3 */
#include <stdio.h>
/* Both read handles refer to demo.c in a single isolated working directory. */
int main(void)
{
    FILE *a = fopen("demo.c","r"), *b; int ok;
    if (a == NULL) { return 1; } puts("F1 R1 open:r");
    b = fopen("demo.c","r");
    if (b == NULL) { (void)fclose(a); return 2; } puts("F1 R2 open:r");
    ok = fgetc(a) == '/'; if (fgetc(b) != '/') { ok = 0; }
    if (fclose(b)!=0) { (void)fclose(a); return 3; } puts("F1 R2 closed");
    if (fclose(a)!=0) { return 4; } puts("F1 R1 closed"); return ok ? 0 : 5;
}
