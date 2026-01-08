#include <stdio.h>

int main(void)
{
    int x = 5, y = 10;

    printf("%d\n", x == y);
    printf("%d\n", x != y);
    printf("%d\n", x > 5);
    printf("%d\n", y < 5);
    printf("%d\n", y >= 10);

    // 산술연산(+)이 관계연산(<=)보다 우선한다
    printf("%d\n", y <= x + 5);

    return 0;
}