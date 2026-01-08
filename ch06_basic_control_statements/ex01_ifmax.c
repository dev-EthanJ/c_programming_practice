#include <stdio.h>

int main(void) {

    int nMax, nInput = 0;

    scanf("%d", &nInput);
    nMax = nInput;

    scanf("%d", &nInput);
    if (nInput > nMax) {nMax = nInput;}


    scanf("%d", &nInput);
    if (nInput > nMax) {nMax = nInput;}

    printf("MAX : %d\n", nMax);

    return 0;
}