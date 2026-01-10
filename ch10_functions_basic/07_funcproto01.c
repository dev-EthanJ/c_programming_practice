// 함수의 원형 prototype 선언
#include <stdio.h>

// 함수의 존재를 컴파일러에게 알린다(선언)
int Add(int a, int b);

int main(void) 
{
    printf("%d\n", Add(3, 4));

    return 0;
}

// 함수 정의
int Add(int x, int y)
{
    return x + y;
}


