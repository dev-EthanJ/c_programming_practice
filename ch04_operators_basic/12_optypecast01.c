#include <stdio.h>

int main(void)
{
    int x = 5;

    // int / int -> int
    printf("%d\n", 5 / 2);

    // double / int -> double
    printf("%f\n", 5.0 / 2);
    
    // int / double -> double
    printf("%f\n", 5 / 2.0);

    // double / int -> double
    printf("%f\n", (double)5 / 2);
    printf("%f\n", (double)x / 2);

    // int / double -> double
    printf("%f\n", 5 / (double)2);

    // double
    printf("%f\n", (double)(5 / 2));

    return 0;
}