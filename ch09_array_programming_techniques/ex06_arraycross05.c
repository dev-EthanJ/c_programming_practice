// 열방향 지그재그 배열 채우기
#include <stdio.h>

int main(void)
{
    int list[5][5] = { 0 };
    int i = 0, j = 0, counter = 0;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            if (i % 2 == 0) list[j][i] = ++counter;
            else list[4 - j][i] = ++counter;
        }
    }

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar('\n');
    }

    return 0;
}