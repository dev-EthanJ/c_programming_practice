// sprint() 함수를 이용한 문자열 붙이기
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char data[128] = { "Hello" };
    char buffer[128] = { 0 };

    printf("Input: ");
    fgets(buffer, sizeof(buffer), stdin);

    sprintf(data, "%s%s", data, buffer);
    fputs(data, stdout);

    return 0;
}