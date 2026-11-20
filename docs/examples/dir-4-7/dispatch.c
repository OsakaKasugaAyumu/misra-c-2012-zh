/* 自编 C 示例（非原文） | Check a withdrawal before choosing an action. */
#include <stdio.h>

enum result { STOCK_OK, ZERO_REQUEST, SHORT_STOCK };
enum action { SEND, WAIT, REJECT };

/* stock points to a live counter; failure leaves its value unchanged. */
static enum result withdraw(unsigned int want, unsigned int *stock)
{
    if (want == 0U) { return ZERO_REQUEST; }
    if (want > *stock) { return SHORT_STOCK; }
    *stock -= want;
    return STOCK_OK;
}

static enum action choose(unsigned int want, unsigned int *stock)
{
#if defined(REVIEW_UNCHECKED)
    /* Contrast only: throws away the status and always approves. */
    (void)withdraw(want, stock);
    return SEND;
#else
    switch (withdraw(want, stock)) {
    case STOCK_OK:     return SEND;
    case SHORT_STOCK:  return WAIT;
    case ZERO_REQUEST: return REJECT;
    }
    return REJECT;
#endif
}

int main(void)
{
    const unsigned int wants[] = { 2U, 8U, 0U, 3U };
    const enum action expect[] = { SEND, WAIT, REJECT, SEND };
    const unsigned int after[] = { 3U, 3U, 3U, 0U };
    const char *const label[] = { "send", "wait", "reject" };
    unsigned int stock = 5U;
    unsigned int i;
    int failed = 0;
    for (i = 0U; i < 4U; ++i) {
        enum action action = choose(wants[i], &stock);
        if ((action != expect[i]) || (stock != after[i])) { failed = 1; }
        if (printf("want=%u action=%s stock=%u\n",
                   wants[i], label[action], stock) < 0) { return 2; }
    }
    return failed;
}
