/* 自编 C 示例（非原文） | Rule 22.3 */
/* One physical file F1, two independent stream lifetimes overlap. */
static const char *const proposed[] = { "F1 R1 open:r", "F1 W2 open:w", "F1 W2 close", "F1 R1 close" };
