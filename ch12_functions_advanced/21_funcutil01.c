// 유틸리티 함수
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char buffer[32] = { 0 };
    int result = 0;

    printf("Input String: ");
    fgets(buffer, sizeof(buffer), stdin);

    result = atoi(buffer);
    printf("%d\n", result);

    return 0;
}
