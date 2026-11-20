/* 自编 C 示例（非原文）：核对一张临时票据在每条返回路径上的打开、写入和关闭。 */
#include <stdio.h>

enum result { SAVED, NO_TICKET, BAD_DIGIT, IO_ERROR };
static int log_failed;

static void event(const char *name)
{
    if (puts(name) == EOF) {
        log_failed = 1;
    }
}

static FILE *ticket_open(int deny)
{
    FILE *file;
    if (deny != 0) {
        event("open:denied");
        return NULL;
    }
    file = tmpfile();
    event((file != NULL) ? "open:ok" : "open:failed");
    return file;
}

static enum result ticket_write(FILE *file, int digit)
{
    if ((digit < 0) || (digit > 9)) {
        event("write:rejected");
        return BAD_DIGIT;
    }
    if (fputc('0' + digit, file) == EOF) {
        event("write:failed");
        return IO_ERROR;
    }
    event("write:ok");
    return SAVED;
}

static int ticket_close(FILE *file)
{
    int ok = (fclose(file) == 0);
    event(ok ? "close:ok" : "close:failed");
    return ok;
}

static enum result save_digit(int deny, int digit)
{
    FILE *file = ticket_open(deny);
    enum result status;
    if (file == NULL) {
        return NO_TICKET;
    }
    status = ticket_write(file, digit);
    if (!ticket_close(file)) {
        return IO_ERROR;
    }
    return status;
}

int main(void)
{
    event("case:valid");
    if (save_digit(0, 7) != SAVED) { return 1; }
    event("case:invalid");
    if (save_digit(0, 12) != BAD_DIGIT) { return 1; }
    event("case:denied");
    if (save_digit(1, 7) != NO_TICKET) { return 1; }
    return log_failed ? 2 : 0;
}
