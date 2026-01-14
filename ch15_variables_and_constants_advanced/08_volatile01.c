// 형한정어 volatile
#include <stdio.h>

int main(void)
{
    int data = 10, i = 0;

    // Release 모드에서 기계어 번역조차 안됨
    for (i = 0; i < 100; ++i)
        data = 10;

    printf("%d\n", data);

    return 0;
}