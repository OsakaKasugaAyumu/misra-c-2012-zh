/* 自编 C 示例（非原文） | Rule 5.1 */
unsigned int inlet_volume(void);
#ifdef COMPARE
unsigned int INLET_velocity(void);
#else
unsigned int drain_velocity(void);
#endif
int main(void) {
#ifdef COMPARE
    return (inlet_volume() + INLET_velocity() == 8U) ? 0 : 1;
#else
    return (inlet_volume() + drain_velocity() == 8U) ? 0 : 1;
#endif
}
