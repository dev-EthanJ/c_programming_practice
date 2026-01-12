// 재귀호출 recursion으로 구현한 팩토리얼 구하기
#include <stdio.h>

int GetFactorial(int param)
{
    int result = 0;
    // recursion을 끝내는 조건식
    if (param == 1) return 1;

    result = param * GetFactorial(param - 1);

    return result;
}

int main(int argc, char* argv[])
{
    printf("5! == %d\n", GetFactorial(5));

    return 0;
}