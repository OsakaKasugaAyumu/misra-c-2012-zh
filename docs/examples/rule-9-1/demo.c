/* 自编 C 示例（非原文） | Rule 9.1 */
struct reading { int lane; int grade; };
static int grade_for(int available)
{
    struct reading sample;
    sample.lane = 2;
#ifndef COMPARE
    sample.grade = 0;
#endif
    if (available) { sample.grade = 7; }
    return sample.grade;
}
#ifdef BYPASS
static int bypass(int skip)
{
    switch (skip) {
        int level = 5;
        case 1: return level;
        default: return 0;
    }
}
#endif
int main(void) { return grade_for(0) != 0 || grade_for(1) != 7; }
