// 지그재그 2차원 배열 채우기, 항상 순방향
#include <stdio.h>

int main(void)
{
    int list[5][5] = { 0 };
    int i = 0, j = 0, counter = 0, offset = 1;


    for (i = 0; i < 5; ++i) {
        // 순방향 채우기 할 때 0열의 기준 데이터 counter 구하기
        if (i % 2 == 0) counter = i * 5;
        else counter = (i + 1) * 5 + 1;

        for (j = 0; j < 5; ++j) {
            counter += offset;
            list[i][j] = counter;
        }
        // 한 행마다 +1, -1 교차
        offset *= -1;
    }

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar('\n');
    }


    return 0;
}