#include <stdio.h>

int main(void)
{
    int x = 10;

    // int * int -> int
    printf("10 * 10 : %d\n", x * 10);
    // int * double -> double
    printf("10 * 10.0 : %d\n", x * 10.0);

    // int / int -> int, Quotient
    printf("10 / 10 : %d\n", x / 10);

    printf("5 / 2 : %d\n", 5 / 2);
    printf("5 / 2 : %f\n", 5 / 2);

    // double / int -> double, no Remainder
    printf("5.0 / 2 : %f\n", 5.0 / 2);
    
    return 0;
}