// while문과 for문 비교
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("*\t");
        }
        putchar('\n');
    }

    return 0;
}