// 배열에 저장된 문자열의 크기를 포인터변수의 주솟값으로 측정
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[16] = { "Hello" };
    char *data = buffer;
    int length = 0;

    while (*data != '\0') {
        ++data;
        ++length;
    }

    printf("Length: %d\n", length);
    printf("Length: %d\n", strlen(buffer));
    printf("Length: %d\n", strlen("Hello"));

    return 0;
}