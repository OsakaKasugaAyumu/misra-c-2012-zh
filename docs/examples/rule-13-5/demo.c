/* 自编 C 示例（非原文） | Rule 13.5 | C99 */
#include <stdio.h>
#include <stdbool.h>
static unsigned int reads;
static bool sample(void) { ++reads; return true; }
static bool probe(bool gate, bool use_or)
{
#ifdef COMPARE
    return use_or ? (gate || sample()) : (gate && sample());
#else
    bool value = sample();
    return use_or ? (gate || value) : (gate && value);
#endif
}
int main(void)
{
    unsigned int trace[4];
    (void)probe(false,false); trace[0] = reads;
    (void)probe(true,false);  trace[1] = reads;
    (void)probe(false,true);  trace[2] = reads;
    (void)probe(true,true);   trace[3] = reads;
    printf("cumulative=%u,%u,%u,%u\n",trace[0],trace[1],trace[2],trace[3]);
#ifdef COMPARE
    return (reads == 2U) ? 0 : 1;
#else
    return (reads == 4U) ? 0 : 1;
#endif
}
