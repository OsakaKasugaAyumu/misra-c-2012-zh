/* 自编 C 示例（非原文） | Public interface: no member declarations. */
#ifndef MARK_METER_H
#define MARK_METER_H

struct meter;
/* One static three-mark meter: reset returns its borrowed handle. */
struct meter *meter_reset(void);
void meter_mark(struct meter *m);
unsigned int meter_count(const struct meter *m);

#endif
