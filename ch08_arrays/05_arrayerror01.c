// 배열 이름(식별자)는 주소상수, l-value가 될 수 없다
#include <stdio.h>

int main(void)
{
    int aList[5] = {10, 20, 30, 40, 50};
    int aNewList[5] = {0};
    int i = 0;

    // aNewList = aList;

    for (i = 0; i < 5; ++i)
        printf("%d\t", aNewList[i]);

    return 0;
}