// 문자열 비교
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buffer[] = { "TestString" };
    char *data = "TestString";

    // 각 문자열의 문자의 정수표현을 한글자씩 비교
    printf("%d\n", strcmp(buffer, data));
    printf("%d\n", strcmp("TestString", data));
    printf("%d\n", strcmp("Test", "TestString"));

    return 0;
}