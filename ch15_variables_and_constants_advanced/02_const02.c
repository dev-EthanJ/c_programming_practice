// 형한정어, const, 상수화된 변수 선언 및 정의
#include <stdio.h>

int main(void)
{
    // 상수화된 변수 선언 및 정의
    const int cutoff = 70;
    int input = 0;

    printf("점수를 입력하세요: ");
    scanf("%d", &input);

    if (input >= cutoff)
        printf("합격입니다.\n");
    else
        printf("불합격입니다.\n");

    return 0;
}