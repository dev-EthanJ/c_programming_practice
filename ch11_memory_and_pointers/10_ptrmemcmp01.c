// memcmp() 메모리 비교 함수
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[12] = { "TestString" };
    char *data = "TestString";

    printf("buffer - data = %d\n", memcmp(buffer, data, 10));
    printf("\"teststring\" - data = %d\n", memcmp("teststring", data, 10));
    printf("\"DataString\" - data = %d\n", memcmp("DataString", data, 10));

    return 0;
}