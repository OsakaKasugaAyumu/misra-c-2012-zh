/* 自编 C 示例（非原文） | Rule 20.12 */
#define SLOT amber
enum { amber = 2, port_amber = 8, port_SLOT = 16 };
#define READ_PAIR(value, label) ((value) + port_ ## label)
#ifdef MIXED
# define READ_ONE(name) ((name) + port_ ## name)
#endif
int main(void)
{
#ifdef MIXED
# ifdef DIRECT_NAME
    return READ_ONE(amber);
# else
    return READ_ONE(SLOT);
# endif
#else
    return READ_PAIR(SLOT, amber);
#endif
}
