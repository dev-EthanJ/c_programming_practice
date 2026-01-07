#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, nTemp = 0;
    printf("Before swap: %d, %d\n", x, y);

    nTemp = x;
    x = y;
    y = nTemp;

    printf("After swap: %d, %d\n", x, y);

    return 0;
}