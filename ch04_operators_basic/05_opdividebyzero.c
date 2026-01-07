#include <stdio.h>

int main(void)
{
    int nInput = 0;
    printf("정수를 입력하세요 : ");

    scanf("%d", &nInput);
    // 10으로 나뉘어지면 에러 발생
    printf("10 / %d = %d\n", nInput, 10 / nInput);

    return 0;
}