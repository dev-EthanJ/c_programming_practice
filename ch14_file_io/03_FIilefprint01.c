// 텍스트 파일 입출력, fprintf() 함수
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* file = NULL;
    file = fopen("test.txt", "w");

    fprintf(file, "%s\n", "Test String");
    fprintf(file, "%s\n", "Hello World");

    fclose(file);
    // cmd에서 txt파일 내용 출력
    system("type test.txt");

    return 0;
}