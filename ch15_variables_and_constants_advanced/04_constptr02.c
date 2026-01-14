// 상수형 포인터
#include <stdio.h>

// 상수형 포인터가 가리키는 대상은 read only
void PrintString(const char *data)
{
    puts(data);
}

int main(void)
{
    char buffer[32] = { "We ain't even famous." };

    // 함수를 호출하더라도 매개변수 데이터가 변경되지 않는다
    PrintString(buffer);
    PrintString("You are my best friend.");

    return 0;
}