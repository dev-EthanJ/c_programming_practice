// 요소 초기화와 함께 최솟값 및 최댓값 구하기
#include <stdio.h>

int main(void)
{
    int aList[5] = { 0 };
    int nMin, nMax, i = 0, nInput = 0;

    for (i = 0; i < 5; ++i) {
        scanf("%d", &aList[i]);

        if (i == 0) {
            nMin = aList[i];
            nMax = aList[i];
        }

        if (aList[i] < nMin) nMin = aList[i];
        if (aList[i] > nMax) nMax = aList[i];
    }

    printf("MIN: %d, MAX: %d\n", nMin, nMax);

    return 0;
}