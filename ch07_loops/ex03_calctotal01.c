#include <stdio.h>

int main(void)
{
    int nCount = 0;
    printf("1부터 총합을 구할 마지막 숫자를 입력하세요. : ");
    scanf("%d", &nCount);

    int nTotal = 0;
    while (nCount > 0) {
        nTotal += nCount;
        --nCount;
    }

    printf("Total: %d\n", nTotal);

    return 0;
}