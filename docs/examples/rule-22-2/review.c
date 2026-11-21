/* 自编 C 示例（非原文） | Rule 22.2 */
/* Hypothetical events; neither invalid free is issued. */
static const char *const wrong_origin[] = { "STACK declare", "STACK release" };
static const char *const repeated[] = { "M1 acquire", "M1 release:owner", "M1 release:view" };
