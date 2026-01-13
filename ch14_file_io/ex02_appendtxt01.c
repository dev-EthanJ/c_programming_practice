// 문자열 추가 후 저장
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = NULL;
    char buffer[512] = { 0 };

    fgets(buffer, sizeof(buffer), stdin);

    file = fopen("testfile.txt", "a");
    if (file == NULL) return 1;

    fputs(buffer, file);

    fclose(file);
    system("type testfile.txt");

    return 0;
}