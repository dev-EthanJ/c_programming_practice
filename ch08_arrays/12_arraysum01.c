// 2차원 배열의 인덱스 경계를 벗어난 입출력
#include <stdio.h>

int main(void)
{
    int aList[3][4] = { 0 };
    int i = 0, j = 0, nItem = 0;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            aList[i][j] = (nItem += 10);
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');

    aList[0][4] = 300;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }    
    
    return 0;
}