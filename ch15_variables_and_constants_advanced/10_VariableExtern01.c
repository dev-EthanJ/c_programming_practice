// extern 외부 변수 선언
// 10_VariableExtern01.c file
#include <stdio.h>

// 외부 파일에 정의된 함수 원형 선언
void InitCounter(int data);
void IncreaseCounter();

// 외부 파일에 정의된 전역변수 선언
extern int g_counter;

int main(void)
{
    InitCounter(10);
    printf("%d\n", g_counter);

    IncreaseCounter();
    printf("%d\n", g_counter);

    return 0;
}