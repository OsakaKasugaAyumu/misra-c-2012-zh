/* 自编 C 示例（非原文） | Rule 5.2 */
int main(void) {
    unsigned int archive_partition_verified_slot_limit = 9U;
#ifdef COMPARE
    unsigned int archive_partition_verified_slot_level = 4U;
    return archive_partition_verified_slot_limit > archive_partition_verified_slot_level ? 0 : 1;
#else
    unsigned int occupied_slots = 4U;
    return archive_partition_verified_slot_limit > occupied_slots ? 0 : 1;
#endif
}
