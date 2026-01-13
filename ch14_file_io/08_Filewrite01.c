// fread(), fwrite() 함수
#include <stdio.h>
#include <stdlib.h>

typedef struct _DATA
{
    char name[16];
    char phone[16];
} DATA;

int main(void)
{
    FILE* file = NULL;
    DATA data = { "Insung", "1234-5678" };

    file = fopen("test.dat", "wb");
    if (file == NULL) return 1;

    fwrite(&data, sizeof(DATA), 1, file);
    fclose(file);

    system("type test.dat");
    return 0;
}
