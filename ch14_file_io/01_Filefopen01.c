// 텍스트 파일과 바이너리 파일, fopne() 함수와 fclose() 함수
#include <stdio.h>

int main(void)
{
    FILE *file = NULL;

    file = fopen("test.txt", "w");
    if (file == NULL) {
        puts("ERROR: Failed to open file.");
        return 1;
    }

    fclose(file);

    return 0;
}