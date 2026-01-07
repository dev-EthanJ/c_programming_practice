#include <stdio.h>

int main(void)
{
    int nResult = 0, nData = 10;

    // nResult = nResult + 3;
    nResult += 3;
    printf("%d\n", nResult);

    // nResult = nResult * nData;
    nResult *= nData;
    printf("%d\n", nResult);

    // nResult = nResult / 2;
    nResult /= 2; 
    printf("%d\n", nResult);

    // nResult = nResult - (nData - 5);
    nResult -= nData - 5;
    printf("%d\n", nResult);

    // nResult = nResult % 3;
    nResult %= 3;
    printf("%d\n", nResult);

    return 0;
}