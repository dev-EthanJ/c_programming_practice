// calling convention, __cdecl
#include <stdio.h>

// 매개변수로 인해 증가하는 Stack 영역 크기: 12 bytes
int __cdecl GetMax(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    return max;
}

int __cdecl main(void)
{
    int result = 0;
    result = GetMax(3, 1, 2);
    printf("%d\n", result);

    return 0;
}