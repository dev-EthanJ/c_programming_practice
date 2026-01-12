// 문자열 길이 측정
#include <stdio.h>

// 매개변수 상수화 > 원본 메모리 수정 방지
int GetLength(const char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        ++length;
    }

    return length;
}

int main(int argc, char* argv[])
{
    char* data = "Hello";

    printf("%d\n", GetLength("Hi"));
    printf("%d\n", GetLength(data));

    return 0;
}