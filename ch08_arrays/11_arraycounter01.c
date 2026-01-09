// Counter로 2차원 배열 초기화
#include <stdio.h>

int main(void)
{
    int aList[4][3] = { 0 };
    int i = 0, j = 0, nCounter = 0;

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 3; ++j) {
            aList[i][j] = ++nCounter;
        }
    }

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }

    return 0;
}