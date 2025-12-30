#include <stdio.h>
// -.h 헤더파일에는 라이브러리 함수들의 선언부가 포함되어 있다

int main(void) // Caller 호출자 함수 main()
{
    printf("Hello, World!\n");
    // Callee 피호출자 함수 printf()
    // 호출자 함수 main()는 피호출자 함수 printf()의 매개변수의 초깃값(=실인수, argument)를 확정해야 한다 
    // 피호출자함수 printf()는 정보를 반환해야 하는 의무가 있다
    return 0;
}