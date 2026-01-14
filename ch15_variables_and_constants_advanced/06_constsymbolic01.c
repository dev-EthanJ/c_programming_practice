// symbolic constant 만들기, #define 전처리기 사용
#include <stdio.h>

#define CUTOFF 70

int main(void)
{
    int input = 0;

    printf("점수를 입력하세요. : ");
    scanf("%d", &input);

    // 컴파일러는 컴파일 전에, CUTOFF를 70으로 치환
    if (input >= CUTOFF) printf("Pass.\n");
    else printf("Failed.\n");

    return 0;
}