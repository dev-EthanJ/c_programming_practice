// 왼쪽 정렬 직각삼각형
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j <= i; ++j) {
            printf("*\t");
        }
        putchar('\n');
    }

    return 0;
}