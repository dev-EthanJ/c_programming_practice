// 포인터 변수의 선언 및 정의, 직접지정과 간접지정*
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *data = &x;

    printf("x : %d\n", x);

    *data = 20;

    printf("x : %d\n", x);

    return 0;
}