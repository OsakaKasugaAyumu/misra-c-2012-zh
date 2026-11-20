/* 自编 C 示例（非原文） | Rule 5.4 */
#define FLOOR_AT(sample, floor_value) ((sample) < (floor_value) ? (floor_value) : (sample))
#define NEXT_AT(sample) ((sample) + 1U)
#ifdef COMPARE
#define BAD_PAIR(reading, reading) (reading)
#endif
int main(void) { return NEXT_AT(FLOOR_AT(3U, 5U)) == 6U ? 0 : 1; }
