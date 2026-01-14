// 조건부 컴파일을 통한 빌드모드 선택
#include <stdio.h>

#define _DEBUG

#ifdef _DEBUG
    #define MODEMESSAGE "Debug Mode"
#else
    #define MODEMESSAGE "Release Mode"
#endif

int main(void)
{
    puts(MODEMESSAGE);

    return 0;
}