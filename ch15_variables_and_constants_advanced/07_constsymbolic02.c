// #define 이용한 심볼릭 상수는 문법적으로 완전히 상수
#include <stdio.h>

#define MAXLENGTH 32

int main(void)
{
    // 배열 선언에 #define 상수 사용 가능
    char name[MAXLENGTH] = { 0 };

    printf("이름을 입력하세요: ");
    fgets(name, sizeof(char) * MAXLENGTH, stdin);

    fputs(name, stdout);

    return 0;
}