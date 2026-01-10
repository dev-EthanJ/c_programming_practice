// UI와 기능의 분리
#include <stdio.h>

int GetFactorial(int param)
{
    int result = 1, i = 0;

    if (param < 1 || param > 10) return 0;

    for (i = 1; i <= param; ++i) {
        result *= i;
    }

    return result;
}

// 화면 출력과 관련한 코드는 모두 main()함수가 담당한다
int main(void)
{
    int result = 0, input = 0;

    printf("팩토리얼 값을 구할 정수(1~10)를 입력하세요. : ");
    scanf("%d", &input);

    result = GetFactorial(input);
    if (result == 0) {
        puts("ERROR: 1~10 사이의 정수를 입력하세요.");
        
        return 0;
    }

    printf("Result: %d\n", result);;

    return 0;
}