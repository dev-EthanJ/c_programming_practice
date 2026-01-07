#include <stdio.h>

int main(void)
{
    int x = 0, nResult = 0;

    ++x;
    printf("%d\n", x);

    x++;
    printf("%d\n", x);

    nResult = --x;
    printf("%d, %d\n", nResult, x);

    //subfix는 우선순위 최하위, 구문이 종료된 후 증감이 수행된다
    nResult = x--;
    printf("%d, %d\n", nResult, x);

    return 0;
}