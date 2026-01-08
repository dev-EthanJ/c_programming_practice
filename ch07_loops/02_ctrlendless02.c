#include <stdio.h>

int main(void)
{
    int nIndex = 0;

    //integer overflow로 음수최대값이 나와서 종료됨
    while (nIndex >= 0) {
        ++nIndex;
    }

    printf("%d\n", nIndex);

    return 0;
}