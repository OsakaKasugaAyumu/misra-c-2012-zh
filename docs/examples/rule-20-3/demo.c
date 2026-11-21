/* 自编 C 示例（非原文） | Rule 20.3 */
#define PROFILE_FILE "scale.h"
#ifdef VIA_ANGLE
#include <scale.h>
#else
#include PROFILE_FILE
#endif
int main(void) { return SCALE_STEP; }
