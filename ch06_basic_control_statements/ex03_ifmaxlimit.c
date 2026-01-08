#include <stdio.h>

int main(void)
{
    int nMax = -100, nInput = 0;

    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    printf("MAX: %d\n", nMax);

    return 0;
}