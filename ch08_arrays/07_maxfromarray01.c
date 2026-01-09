// 배열을 통해 최댓값 구하기
#include <stdio.h>

int main(void)
{
    int aList[5] = { 10, 20, 30, 40, 50 };
    /*
    int i = 0, nMax = aList[0];

    for (i = 1; i < 5; ++i) {
        if (aList[i] > nMax) nMax = aList[i];
    }
    */
    int i = 0, nMax;

    for (i = 0; i < 5; ++i) {
        scanf("%d", &aList[i]);
        if (i == 0) nMax = aList[i];
        if (aList[i] > nMax) nMax = aList[i];
    }

    for (i = 0; i < 5; ++i) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    printf("MAX : %d\n", nMax);

    return 0;
}