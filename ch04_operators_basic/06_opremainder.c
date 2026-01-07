#include <stdio.h>

int main(void)
{
    int x = 0;
    scanf("%d", &x);

    printf("%d / 3\n", x); 
    printf("몫(Q): %d\n", x / 3);
    printf("나머지(R): %d\n", x % 3);

    return 0;
}