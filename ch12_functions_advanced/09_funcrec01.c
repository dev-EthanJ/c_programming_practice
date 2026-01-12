// 재귀호출 recursive function call로 구현하지 않은 팩토리얼 구하기
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 0, fact = 1;
    for (i = 5; i >= 1; --i) {
        fact *= i;
    }

    printf("5! == %d\n", fact);

    return 0;
}