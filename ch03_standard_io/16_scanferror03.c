#include <stdio.h>

int main(void)
{
    int nInput = 0;
    //scanf()함수의 parameter로 들어간 format string 형식 그대로 입력해야 입력 가능
    scanf("Input : %d", &nInput);

    printf("Input : %d\n", nInput);

    return 0;
}