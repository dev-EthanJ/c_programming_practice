// 포인터의 배열
#include <stdio.h>

int main(void)
{
    char *strlist[3] = {"Hello", "World", "String"};

    int i = 0;
    for (i = 0; i < 3; ++i) {
        printf("%s\t", strlist[i]);
    }
    putchar('\n');

    for (i = 0; i < 3; ++i) {
        printf("%s\t", strlist[i] + 2);
    }
    putchar('\n');

    for (i = 0; i < 3; ++i) {
        printf("%c\t", strlist[i][2]);
    }


    return 0;
}