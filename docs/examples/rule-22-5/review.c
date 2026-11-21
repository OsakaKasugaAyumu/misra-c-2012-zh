/* 自编 C 示例（非原文） | Rule 22.5 */
/* Inspection only. No FILE object representation is read or copied. */
static const char *const proposed[] = { "S1 alias:reader", "reader indirect:memcpy", "reader direct:dereference" };
