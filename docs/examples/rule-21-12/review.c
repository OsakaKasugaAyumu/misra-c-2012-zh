/* 自编 C 示例（非原文） | Rule 21.12 */
#include <fenv.h>
/* Only inspect the identifiers. No exception is cleared, raised or tested. */
void names(void) {
    (void)feclearexcept; (void)fegetexceptflag; (void)feraiseexcept;
    (void)fesetexceptflag; (void)fetestexcept;
}
#define OBSERVED_FLAGS FE_ALL_EXCEPT
