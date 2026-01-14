// 상수형 포인터
#include <stdio.h>

int main(void)
{
    char buffer[32] = { "I am a boy." };
    const char* data = buffer;

    buffer[0] = 'i';
    
    // 포인터가 가리키는 대상을 간접지정(*) 할수는 있지만 l-value로 사용할수는 없다
    // data[0] = 'i';

    return 0;
}