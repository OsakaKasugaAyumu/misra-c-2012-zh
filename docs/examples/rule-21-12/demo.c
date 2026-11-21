/* 自编 C 示例（非原文） | Rule 21.12 */
static int scale(unsigned int ticks, unsigned int period, double *out)
{
    if (period == 0U) { return 1; }
    *out = (double)ticks/(double)period; return 0;
}
int main(void)
{
    double result = 0.0; int refused = scale(8U,0U,&result);
    int ok = scale(8U,4U,&result);
    return 10*refused + ok + (result == 2.0 ? 2 : 0);
}
