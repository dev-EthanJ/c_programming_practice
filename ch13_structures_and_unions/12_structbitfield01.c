// 비트필드 구조체 bit-field structure
#include <stdio.h>

typedef struct DATAFLAG
{
    unsigned char main : 1;
    unsigned char left : 2;
    unsigned char right : 3;
    unsigned char top : 2;
} DATAFLAG;

int main(void)
{
    DATAFLAG flag = { 0, 3, 7, 00 };

    printf("%d\n", flag.main); // 0
    printf("%d\n", flag.left); // 11
    printf("%d\n", flag.right); // 111
    printf("%d\n", flag.top); // 00
    
    printf("%X\n", *((unsigned char *)&flag));
    printf("%d\n", sizeof(flag));

    return 0;
}