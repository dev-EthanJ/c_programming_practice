#include <stdio.h>

int main(void)
{
    int nInput = 0;

    scanf("%d", &nInput);
    if (nInput < 1) nInput = 1;
    if (nInput > 9) nInput = 9;

    /*
    while (nInput > 0) {
        putchar('*');
        --nInput;
    }
    */

    int i = 0;
    while (i < nInput) {
        putchar('*');
        ++i;
    }

    return 0;
}