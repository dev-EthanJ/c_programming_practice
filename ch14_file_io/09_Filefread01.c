// fread() 함수
#include <stdio.h>

typedef struct _DATA
{
    char name[16];
    char phone[16];
} DATA;

int main(void)
{
    FILE *file = NULL;
    DATA userdata = { 0 };

    file = fopen("test.dat", "rb");
    if (file == NULL) return 1;

    fread(&userdata, sizeof(DATA), 1, file);
    puts(userdata.name);
    puts(userdata.phone);

    fclose(file);

    return 0;
}