// 배열 연산자 풀어쓰기
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[32] = { "You are a girl." };

    printf("%c\n", buffer[0]);
    printf("%c\n", *(buffer + 0));
    printf("%c\n", *buffer);
    putchar('\n');

    // ptr[index] == *(ptr + index)
    printf("%c\n", buffer[5]);
    printf("%c\n", *(buffer + 5));
    putchar('\n');

    // &*ptr == ptr
    printf("%s\n", &buffer[4]);
    printf("%s\n", &*(buffer + 4));
    printf("%s\n", buffer + 4);

    return 0;
}