// 사용자 정의 함수의 선언 및 정의
#include <stdio.h>

int Add(int a, int b)
{
    int nData = 0;
    nData = a + b;

    return nData;
}

int main(void)
{
    int nResult = 0;

    nResult = Add(3, 4);
    printf("Result: %d\n", nResult);

    return 0;
}