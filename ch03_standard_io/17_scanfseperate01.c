#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("두 정수를 입력하세요: ");
    //사용자로부터 두 정수를 입력받아 각각의 변수에 저장
    scanf("%d%d", &x, &y);
    //같은 형식문자가 붙어있으면, white space(' ', \t, \n)로 입력 구별

    printf("두 정수의 합은 %d입니다.\n", x + y);

    return 0;
}