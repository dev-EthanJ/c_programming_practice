#include <stdio.h>

int main(void)
{
    int nInput = 0, bResult = 0;

    scanf("%d", &nInput);
    // 1: 3 < nInput -> 0 or 1
    // 2: 0 < 20 or 1 < 20 -> true(1)
    // 3: beResult = 1
    bResult = 3 < nInput < 20; // (X)
    printf("Result: %d\n", bResult);

    // bResult = 3 < nInput && nInput < 20; (O)
    return 0;
}