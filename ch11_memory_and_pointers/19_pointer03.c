// 다중 포인터
#include <stdio.h>

int main(int argc, char* argv[])
{
    char ch = 'A';
    char *pdata = &ch;
    char* *ppdata = &pdata;
    char** *pppdata = &ppdata;

    printf("%c\n", ch);
    printf("%c\n", *pdata);
    printf("%c\n", **ppdata);
    printf("%c\n", ***pppdata);

    return 0;
}