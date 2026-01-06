#include <stdio.h>

int main(void)
{
    printf("%d\n", 10);
    printf("%u\n", 10);
    printf("%d\n", 10U);
    printf("%u\n", 10U);

    //4바이트 정수 최대값
    printf("%d\n", 2147483647);
    //4바이트 정수 최대값을 넘어선 정수
    printf("%d\n", 2147483648);
    printf("%d\n", 2147483649);
    //unsigned 정수
    printf("%u\n", 2147483649);

    printf("%d\n", -1);
    printf("%u\n", -1);

    return 0;
}