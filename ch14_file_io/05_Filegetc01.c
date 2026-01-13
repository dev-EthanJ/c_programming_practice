// fgetc(), fputc() 함수
#include <stdio.h>

int main(void)
{
    FILE* file = NULL;
    char ch = 0;

    file = fopen("test.txt", "w");
    fputs("Test string!", file);
    fclose(file);

    file = fopen("test.txt", "r");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}