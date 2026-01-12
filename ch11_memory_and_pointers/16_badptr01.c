// 잘못된 메모리 접근
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer = NULL;
    buffer = (char *)malloc(12);
    gets(buffer);
    puts(buffer);

    // 12바이트 넘는 문자열 입력시 버퍼오버플로우, 값 덮어씌우기
    free(buffer);

    return 0;
}