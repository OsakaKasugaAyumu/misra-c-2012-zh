/* 自编 C 示例（非原文） | Rule 21.7 */
/* Domain: decimal port number 0..255, no sign or trailing characters. */
static int port_number(const char *s, unsigned int *out)
{
    unsigned int v = 0U, digit;
    if (*s == '\0') { return 1; }
    while (*s != '\0') {
        if (*s < '0' || *s > '9') { return 1; }
        digit = (unsigned int)(*s - '0');
        if (v > (255U-digit)/10U) { return 2; }
        v = v*10U + digit; ++s;
    }
    *out = v; return 0;
}
int main(int argc, char **argv)
{
    unsigned int value = 0U; int status;
    if (argc != 2) { return 4; }
    status = port_number(argv[1], &value);
    return status == 0 ? (value == 255U ? 3 : 0) : status;
}
