#include <stdio.h>

int main(void)
{
    int nAge = 0;

    printf("나이를 입력하세요. : ");
    //사용자의 입력 정보를 int형식으로 해석하고 nAge변수의 주소를 통해 저장한다
    scanf("%d", &nAge);

    printf("당신의 현재 나이는 %d세 입니다.\n", nAge);

    return 0;
}