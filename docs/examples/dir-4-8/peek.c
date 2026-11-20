/* 自编 C 示例（非原文） | Negative compile-only probe; do not link. */
#include "meter.h"

unsigned int peek(const struct meter *handle)
{
    return handle->filled;
}
