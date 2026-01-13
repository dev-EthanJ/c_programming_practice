// 대상 파일 한 행씩 읽어와서 복사 붙여넣기
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *src = NULL, *dst = NULL;
    char buffer[512] = { 0 };

    src = fopen("testfile.txt", "r");
    dst = fopen("dstfile.txt", "w");
    if (src == NULL || dst == NULL) return 1;

    while(fgets(buffer, sizeof(buffer), src) != NULL) {
        fputs(buffer, dst);
        memset(buffer, 0, sizeof(buffer));
    }

    fclose(src);
    fclose(dst);

    system("type dstfile.txt");

    return 0;
}