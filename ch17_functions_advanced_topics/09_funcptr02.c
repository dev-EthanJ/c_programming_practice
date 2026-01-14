// 함수 포인터
#include <stdio.h>

int GetMax(int a, int b, int c)
{
    int max = a;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    return max;
}

int __cdecl main(void)
{
    // 반환자료형 (호출규칙 *변수이름) (매개변수)
    int (__cdecl *funcGetMax) (int, int, int) = GetMax;

    printf("MAX: %d\n", funcGetMax(1, 3, 2));
    return 0;
}