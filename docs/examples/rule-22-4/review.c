/* 自编 C 示例（非原文） | Rule 22.4 */
/* Hypothetical helper call: S1 keeps its original open mode. */
static const char *const proposed[] = { "S1 open:r", "send_marker:S1 write", "S1 close" };
