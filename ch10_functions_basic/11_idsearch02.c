// 전역변수와 식별자 검색 순서
#include <stdio.h>

int input = 100;

void TestFunc(void)
{
    printf("TestFunc() : %d\n", input);
}

int main(void)
{
    int input = 0;
    printf("%d\n", input);

    {
        int input = 20;
        printf("%d\n", input);
        TestFunc();
    }

    TestFunc();

    return 0;
}