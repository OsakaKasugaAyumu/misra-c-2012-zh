/* 自编 C 示例（非原文） | Rule 21.6 */
static unsigned int encode(unsigned char octet, char out[2])
{
    static const char digits[] = "0123456789ABCDEF";
    out[0] = digits[octet / 16U]; out[1] = digits[octet % 16U]; return 2U;
}
int main(void)
{
    char buf[2]; unsigned int count = encode(93U, buf);
    return (buf[0] == '5' && buf[1] == 'D') ? (int)count : 0;
}
