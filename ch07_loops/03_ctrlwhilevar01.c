// 반복문 내부에 선언한 자동변수 옳은 예시
#include <stdio.h>

int main(void)
{
    char ch = 0;
    int nIndex = 0;

    while ((ch = getchar()) != '\n') {
        printf("%02d\t%c\n", nIndex++, ch);
    }

    return 0;
}