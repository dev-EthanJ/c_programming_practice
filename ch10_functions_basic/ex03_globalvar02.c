// 전역변수와 스코프
#include <stdio.h>

int input = 100;

int TestFunc(void)
{
    printf("%d\n", input);
}

int main(void)
{
    int input = 0;
    scanf("%d", &input);

    if (input > 10) {
        int input = 20;
        printf("%d\n", input);

        TestFunc();

        if (input >= 100) {
            printf("%d\n", input);
        }
    }

    printf("%d\n", input);

    return 0;
}

// 11을 입력했을 때, 예상되는 출력값
/*
20
100
11
*/