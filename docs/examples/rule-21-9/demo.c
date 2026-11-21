/* 自编 C 示例（非原文） | Rule 21.9 */
struct item { int key; int id; };
int main(void)
{
    struct item a[3] = {{2, 1}, {1, 2}, {2, 3}};
    int i, j, first = 0;
    for (i = 1; i < 3; ++i) {
        struct item hold = a[i]; j = i;
        while (j > 0 && hold.key < a[j-1].key) { a[j] = a[j-1]; --j; }
        a[j] = hold;
    }
    for (i = 0; i < 3; ++i) { if (a[i].key == 2) { first = a[i].id; break; } }
    return a[0].id*100 + first*10 + a[2].id;
}
