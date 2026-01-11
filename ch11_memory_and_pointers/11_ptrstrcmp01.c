// 문자열 메모리 비교
#include <stdio.h>

int main(void)
{
    char buffer[12] = { "TestString" };
    char *data = "TestString";

    // 아래의 코드는 문자열이 같은지 비교하는 게 아니라 저장된 메모리 위치가 같은지 비교하는 것
    printf("%d\n", buffer == data);
    printf("%d\n", "TestString" == buffer);
    printf("%d\n", "TestString" == data);

    return 0;
}