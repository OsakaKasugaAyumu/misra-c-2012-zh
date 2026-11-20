/* 自编 C 示例（非原文）：三组检查；每组在新的进程中运行。 */
#include "tally.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        return 2;
    }
    switch (argv[1][0]) {
    case 'a': /* First and last shifts have separate counters. */
        return !((tally_record(0U) == TALLY_OK) &&
                 (tally_record(2U) == TALLY_OK) &&
                 (tally_read(0U) == 1) && (tally_read(1U) == 0) &&
                 (tally_read(2U) == 1));
    case 'b': /* A full counter does not grow or affect another shift. */
        return !((tally_record(1U) == TALLY_OK) &&
                 (tally_record(1U) == TALLY_OK) &&
                 (tally_record(1U) == TALLY_FULL) &&
                 (tally_read(1U) == 2) && (tally_read(0U) == 0) &&
                 (tally_read(2U) == 0));
    case 'c': /* An unknown shift has no storage assigned to it. */
        return !((tally_record(3U) == TALLY_BAD_SHIFT) &&
                 (tally_read(3U) == -1) && (tally_read(0U) == 0) &&
                 (tally_read(1U) == 0) && (tally_read(2U) == 0));
    default:
        return 2;
    }
}
