#include <stdio.h>

int main(void)
{
    printf("%d\n", 1234);
    printf("%d, %d\n", 1234, -5678);

    //부호 붙여서 출력
    printf("%+d, %+d\n", 1234, -5678);

    //정수를 8자리로 맞추고 오른쪽 정렬
    printf("%8d\n", 1234);
    //8자리 정수 오른쪽 정렬, 왼쪽에 0으로 채워서 출력
    printf("%08d\n", 1234);
    //8자리 정수 왼쪽 정렬 출력
    printf("%-08d\n", 1234);

    return 0;
}