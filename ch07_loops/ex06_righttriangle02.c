// 우측 정렬 직각삼각형 출력하기
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, t = 0;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            if (j < 5 - i - 1) printf("\t");
            else printf("*\t");
        }
        putchar('\n');
    }

    return 0;
}