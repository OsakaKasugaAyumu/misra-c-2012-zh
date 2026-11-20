/* 自编 C 示例（非原文）：每个班次对应一个固定计数器。 */
#ifndef STUDY_SHIFT_TALLY_H
#define STUDY_SHIFT_TALLY_H

enum tally_status { TALLY_OK, TALLY_FULL, TALLY_BAD_SHIFT };

enum tally_status tally_record(unsigned int shift);
int tally_read(unsigned int shift);

#endif
