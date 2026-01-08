// 입력한 숫자 이하의 4의 배수의 개수와 총합을 알려주는 프로그램
#include <stdio.h>

int main(void)
{
    int nNum = 0;
    printf("숫자 범위의 끝 숫자를 입력하세요. : ");
    scanf("%d", &nNum);

    int nTotal = 0, nCount = 0, i = 0;

    for (i = 1; i <= nNum; ++i) {
        if (i % 4 == 0) {
            nTotal += i;
            ++nCount;
        }
    }

    printf("4의 배수의 갯수는 %d개 이며, 총합은 %d입니다. \n", nCount, nTotal);

    return 0;
}