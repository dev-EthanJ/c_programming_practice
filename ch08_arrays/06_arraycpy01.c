// 배열의 복사는 전체 요소 하나하나에 이루어져야 한다
#include <stdio.h>

int main(void)
{
    int aList[5] = { 10, 20, 30, 40, 50 };
    int aNewList[5] = { 0 };
    int i = 0;

    for (i = 0; i < 5; ++i) {
        aNewList[i] = aList[i];
    }

    for (i = 0; i < 5; ++i) {
        printf("%d\t", aNewList[i]);
    }
    putchar('\n');

    return 0;
}