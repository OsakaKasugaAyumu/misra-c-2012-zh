/* 自编 C 示例（非原文） | Rule 8.10 */
#ifndef PAIR_H
#define PAIR_H
#ifdef COMPARE
inline int parcel_pairs(int singles)
#else
static inline int parcel_pairs(int singles)
#endif
{ return singles / 2; }
int dispatch_pairs(void);
#endif
