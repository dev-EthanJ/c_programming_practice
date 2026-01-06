#include <stdio.h>

int main(void)
{
    int nInput = 0;
    //scanf()함수의 format string에 개행문자'\n' 포함 금지
    scanf("%d\n", &nInput);

    printf("%d\n", nInput);

    return 0;
}