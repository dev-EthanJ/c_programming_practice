// 반복문 내부에 선언한 자동변수 잘못된 예시
#include <stdio.h>

int main(void)
{
    char ch = 0;

    while((ch = getchar()) != '\n') {
        int nIndex = 0;
        printf("%02d\t%c\n", nIndex++, ch);
    }

    return 0;
}