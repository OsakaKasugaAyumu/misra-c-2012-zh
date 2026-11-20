/* 自编 C 示例（非原文） | Rule 5.9 */
#ifndef PULSE_STEP_H
#define PULSE_STEP_H
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
static inline unsigned int pulse_next(unsigned int v) { return v + 1U; }
#else
#define pulse_next(v) ((v) + 1U)
#endif
#endif
