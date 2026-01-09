// 지그재그로 2차원 배열 채우기, 보수 이용
#include <stdio.h>

int main(void)
{
    int list[5][5] = { 0 };
    int i = 0, j = 0, counter = 0;

    for (i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            for (j = 0; j < 5; ++j) list[i][j] = ++counter;
        }
        else {
            for (j = 0; j < 5; ++j) list[i][4-j] = ++counter; //보수를 이용하듯 역방향 인덱스 사용
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