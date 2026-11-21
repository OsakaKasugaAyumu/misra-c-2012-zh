/* 自编 C 示例（非原文） | Rule 21.8 */
#include <stdlib.h>
#define LOOKUP getenv
/* Identify all four names without issuing any operation. */
void names(void) { (void)abort; (void)exit; (void)LOOKUP; (void)system; }
