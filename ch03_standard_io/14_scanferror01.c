#include <stdio.h>

int main(void)
{
    int nInput = 0;
    //scanf() 함수의 형식문자열 다음 인자는 모두 주소 형식
    scanf("%d", nInput);

    printf("Input : %d\n", nInput);

    return 0;
}