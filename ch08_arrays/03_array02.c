// 1차원 배열의 기본문법
#include <stdio.h>

int main(void)
{
    int aList[5] = { 10, 20, 30, 40, 50 };
    int i = 0;

    for (i = 0; i < 5; ++i) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    aList[0] = 100;
    aList[2] = 300;

    for (i = 0; i < 5; ++i) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    return 0;
}