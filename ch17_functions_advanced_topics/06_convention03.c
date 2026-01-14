// calling convention, __stdcall
#include <stdio.h>

// 매개변수 스택 정리: Callee, 매개변수 메모리: Stack
int __stdcall GetMax(int a, int b, int c)
{
    int max = a;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    return max;
}

int __cdecl main(void)
{
    int result = 0;
    result = GetMax(3, 1, 2);
    printf("%d\n", result);

    return 0;
}