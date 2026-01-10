// UI와 기능의 분리
#include <stdio.h>

int GetFactorial(int param)
{
    int result = 1, i = 0;
    
    // 메세지 출력은 UI에 해당하므로 함수내에서 처리하는 것은 바람직하지 않다
    if (param < 1 || param > 10) {
        puts("ERROR: 1~10 사이의 정수를 입력하세요");
        
        return 0;
    }

    for (i = 1; i <= param; ++i) {
        result *= i;
    }

    return result;
}

int main(void)
{
    printf("Factorial: %d\n", GetFactorial(1));
    printf("Factorial: %d\n", GetFactorial(5));
    printf("Factorial: %d\n", GetFactorial(11));
    printf("Factorial: %d\n", GetFactorial(10));

    return 0;
}