#include <stdio.h>

int main(void)
{
    int nInput = 0, bResult = 0;

    scanf("%d", &nInput);
    bResult = nInput > 3 && nInput < 20;
    printf("Result: %d\n", bResult);

    return 0;
}