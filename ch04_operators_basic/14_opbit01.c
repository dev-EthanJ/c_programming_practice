#include <stdio.h>

int main(void) {
    int nData = 0x11223344;

    // 0x11223344 AND 0x00FFFF00 -> 0x00223300
    printf("%08X\n", nData & 0x00FFFF00);
    // 0x11223344 OR 0x2211FFFF -> 0x3333FFFF
    printf("%08X\n", nData | 0x2211FFFF);
    // 0x11223344 XOR 0x2211FFFF -> 0x3333CCBB
    printf("%08X\n", nData ^ 0x2211FFFF);

    // NOT 0x11223344 -> 0xEEDDCCBB
    printf("%08X\n", ~nData);

    // right shift 8 bits -> 0x01122334
    printf("%08X\n", nData >> 8);
    // left shift 16 bits -> 0x223344??
    printf("%08X\n", nData << 16);

    return 0;
}