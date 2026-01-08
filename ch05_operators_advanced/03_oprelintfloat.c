#include <stdio.h>

int main(void)
{

    // 실수 double형의 상등 부등 연산은 피하자
    printf("%d\n", 300 == 299.99999F);
    printf("%d\n", 300 == 299.99999);

    printf("%d\n", 300 == 299.9999F);
    printf("%d\n", 300 == 300.00001F);

    return 0;
}