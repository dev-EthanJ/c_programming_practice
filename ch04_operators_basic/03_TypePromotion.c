#include <stdio.h>

int main(void)
{
    char ch = 'A';
    printf("%c\n", ch);

    //char + int > int
    //integral promotion
    printf("%c\n", ch + 1);
    printf("%c\n",'A' + 2);

    //double + int > double
    printf("%d\n", 5.0 + 2);
    printf("%f\n", 5.0 + 2);

    return 0;
}