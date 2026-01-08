// 피라미드 출력하기
#include <stdio.h>

int main(void)
{
    int nHigh = 0;
    printf("피라미드 층수를 입력하세요. : ");
    scanf("%d", &nHigh);

    int i = 0, j = 0;
    
    for (i = 0; i < nHigh; ++i) {
        for (j = 0; j < 2*nHigh; ++j) {
            if (j >= nHigh - 1 - i && j <= nHigh - 1 + i)
                printf("*\t");
            else
                printf("\t");
        }
        putchar('\n');
    }

    return 0;
}