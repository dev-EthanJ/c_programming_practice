#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    printf("두 정수를 입력하세요. : ");
    scanf("%d%d", &a, &b);

    printf("AVG : %.2f", (a + b) / 2.0);

    return 0;
}