// 트리 모양 삼각형 별 출력 프로그램 작성
#include <stdio.h>

int main(void) {

    int i = 0, j = 0;
    int nHigh = 0;

    printf("트리의 높이를 입력하세요. : ");
    scanf("%d", &nHigh);

    int nFlag = 0;
    if (nHigh % 2 == 0) nFlag = 1;
    else nFlag = 0;

    for (i = 0; i < nHigh; ++i) {
        for (j = 0; j < 2*nHigh; ++j) {
            if (j >= nHigh - 1 - i && j <= nHigh - 1 + i) {
                if ((i + j) % 2 == nFlag) printf("*\t");
                else printf("\t");
            }
            else printf("\t");
        }
        putchar('\n');
    }

    return 0;
}