// 중첩된 반복문에서 break
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; ++i) {
        printf("i == %d\n", i);

        for (j = 0; j < 5; ++j) {
            if (j > 2) break;
            printf("j == %d\n", j);
        }
        putchar('\n');
    }

    return 0;
}