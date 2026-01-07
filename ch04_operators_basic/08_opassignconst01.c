#include <stdio.h>

int main(void)
{
    char szBuffer[32] = { 0 };

    // 상수에는 대입을 수행할 수 없다
    // 3 = 4; (X)

    // 배열이름은 주소상수이므로 대입을 수행할 수 없다
    // szBuffer = 'A'; (X)

    return 0;
}