// 형한정어 const, 어떤 대상을 상수화 할 것인가
#include <stdio.h>

int main(void)
{
    int input = 0;

    printf("점수를 입력하세요. : ");
    scanf("%d", &input);

    // 나중에 바뀔 수 있는 70이라는 합격조건을 리터럴 상수로 기재한것이 유지보수 문제될 수 있음
    if (input >= 70) printf("합격입니다.\n");
    else printf("불합격입니다.\n");

    return 0;
}