// 조건부 컴파일
#include <stdio.h>

// _MSG_ 상수의 존재 유무에 따라 MESSAGE 상수 정의가 달라진다
#ifdef _MSG_
#define MESSAGE "I am a boy."
#else
#define MESSAGE "You are a girl"
#endif

int main(void)
{
    puts(MESSAGE);

    return 0;
}