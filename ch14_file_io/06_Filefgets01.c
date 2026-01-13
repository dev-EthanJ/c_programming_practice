// fgets() 함수
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = NULL;
    char buffer[512] = { 0 };

    file = fopen("test.txt", "w");
    fputs("This\n", file);
    fputs("is\n", file);
    fputs("me.\n", file);
    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;

    // fgets(): 한 행씩 끊어서 읽어오기, 실패하면 NULL('\0') 반환
    while (fgets(buffer, sizeof(buffer), file)) {
        fputs(buffer, stdout);
        memset(buffer, 0, sizeof(buffer));
    }

    fclose(file);

    return 0;
}