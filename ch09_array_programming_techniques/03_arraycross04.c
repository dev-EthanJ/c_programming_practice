// flag 변수를 활용한 2차원 배열 지그재그로 채우기
#include <stdio.h>

int main(void)
{
    int list[5][5] = { 0 };
    int i = 0, j = 0, counter = 0, flag = 1;

    for (i = 0; i < 5; ++i) {
        if (flag) { // flag == true
            for (j = 0; j < 5; ++j) list[i][j] = ++counter;
            flag = 0;
        }
        else { // flag == false
            for (j = 0; j < 5; ++j) list[i][4-j] = ++counter;
            flag = 1;
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