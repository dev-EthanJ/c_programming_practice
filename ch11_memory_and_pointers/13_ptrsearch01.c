// 문자열 검색 strstr() 함수
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[32] = { "I am a boy." };

    printf("%p\n", buffer);

    printf("%p\n", strstr(buffer, "am"));
    printf("%p\n", strstr(buffer, "boy"));
    printf("%p\n", strstr(buffer, "are"));

    printf("Index of \"am\": %d\n", strstr(buffer, "am") - buffer);
    printf("Index of \"boy\": %d\n", strstr(buffer, "boy") - buffer);

    return 0;
}