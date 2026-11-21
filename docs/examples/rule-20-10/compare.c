/* 自编 C 示例（非原文） | Rule 20.10 */
# define LETTER(key) #key
# define SLOT(prefix, key) prefix ## key
# define SPELLING LETTER(pulse)
# define NUMBER SLOT(pin, 3)

enum { pin3 = 5 };
int main(void) { return (SPELLING[0] == 'p') ? NUMBER : 0; }
