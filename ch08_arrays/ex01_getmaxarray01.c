// 배열에서 최댓값 구하기
#include <stdio.h>

int main(void)
{
    int aList[5] = { 10, 20, 30, 40, 50 };
    int i = 0;

    for (i = 0; i < 5; ++i) {
        if (aList[i] > aList[0]) {
            aList[0] = aList[i];
        }
    }

    for (i = 0; i < 5; ++i) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    printf("MAX : %d\n", aList[0]);

    return 0;
}