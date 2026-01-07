#include <stdio.h>


int main(void)
{
    int nData = 0x11223344;

    printf("%08x\n", nData & 0xFFFF0000);
    printf("%08x\n", nData & 0x0000FFFF);
    printf("%08x\n", nData & 0x00FFFF00);
    printf("%08x\n", nData & 0xFF0000FF);

    return 0;
}