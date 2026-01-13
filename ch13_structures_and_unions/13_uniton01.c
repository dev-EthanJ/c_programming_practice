// 공용체 union
#include <stdio.h>

typedef union IP_ADDR
{
    int address;
    short data[2];
    unsigned char addr[4];
} IP_ADDR;

int main(void)
{
    IP_ADDR my_data = { 0 };
    my_data.address = 0x41424344;

    int i = 0;
    for (i = 0; i < 4; ++i) {
        printf("%c", my_data.addr[i]);
    }
    putchar('\n');

    for (i = 0; i < 4; ++i) {
        printf("%d.", my_data.addr[i]);
    }
    putchar('\n');

    printf("%X, %u\n", my_data.data[0], my_data.data[0]);
    printf("%X, %u\n", my_data.data[1], my_data.data[1]);

    return 0;
}