// calling convention, __fastcall
#include <stdio.h>

// 매개변수 스택 정리: Callee, 매개변수 메모리: Stack + Register
int __fastcall GetMax(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

int __cdecl main(void)
{
    int result = 0;
    // Register를 메모리로 사용 > 매개변수 복사 횟수 감소 > 연산속도 일부 향상
    result = GetMax(1, 2, 3);
    printf("%d\n", result);

    return 0;
}
