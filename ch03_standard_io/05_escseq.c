#include <stdio.h>

int main(void)
{
    int x = 10;

    //문자상수 화면 출력
    putchar('B');
    //'\n'는 개행문자
    putchar('\n');

    //개행문자가 먼저 출력되었으므로 A는 다음행에 출력됨
    printf("%c\n", 'A');

    //%d라는 format string에 맞춰 변수 x에 담긴 정보 출력
    printf("x는 %d입니다.\n", x);

    return 0;
}