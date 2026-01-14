// 매크로: 함수 호출 오버헤드 보완
#include <stdio.h>

// 매크로 함수 정의, 단 실제 함수는 아니다
#define ADD(a, b) (a + b)

// 사용자 정의 함수 선언 및 정의
int Add(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("%d\n", Add(3, 4));

    printf("%d\n", ADD(3, 4));

    printf("%lf\n", ADD(3.1, 4.3));

    return 0;
}