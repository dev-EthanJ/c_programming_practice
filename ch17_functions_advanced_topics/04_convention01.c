// 함수 호출 규칙 calling convention, __cdecl
#include <stdio.h>

// default calling convention: __cdecl
// 매개변수 스택 정리: Caller, 매개변수 메모리: Stack
int __cdecl main(void)
{
    printf("Hello, World!\n");

    return 0;
}