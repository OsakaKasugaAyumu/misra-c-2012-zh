/* 自编 C 示例（非原文） | Rule 5.6 */
#ifndef COUNT_RECORD_H
#define COUNT_RECORD_H
typedef struct spool_count { unsigned int turns; } spool_count;
unsigned int spool_read(void);
#endif
