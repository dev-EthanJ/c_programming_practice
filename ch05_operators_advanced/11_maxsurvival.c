#include <stdio.h>

int main(void)
{
    int nMax = 0, nInput = 0;

    // 첫번째 입력은 무조건 최대값
    scanf("%d", &nInput);
    nMax = nInput;

    scanf("%d", &nInput);
    nMax = (nInput < nMax ? nMax : nInput);

    scanf("%d", &nInput);
    nMax = (nInput < nMax ? nMax : nInput);

    printf("MAX : %d", nMax);

    return 0;
}