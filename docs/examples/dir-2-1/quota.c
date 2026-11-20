/* 自编 C 示例（非原文） | Dir 2.1 | C90 / C99 */
#include "quota.h"

#ifndef QUOTA_LIMIT
#error QUOTA_LIMIT must be supplied by the build
#elif QUOTA_LIMIT < 1 || QUOTA_LIMIT > 16
#error QUOTA_LIMIT must be in 1..16
#endif

unsigned int quota_take(unsigned int requested)
{
    return (requested < QUOTA_LIMIT) ? requested : QUOTA_LIMIT;
}
