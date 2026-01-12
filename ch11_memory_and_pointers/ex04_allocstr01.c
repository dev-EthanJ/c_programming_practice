// 입력받은 정수만큼 char* 배열 동적할당, 입력받은 정수만큼 char 길이 동적할당
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char* argv[])
{
    int input = 0, size = 0;
    
    scanf("%d", &input);
    char* *str_list = (char **)malloc(sizeof(char *) * input);

    scanf("%d", &size);
    int i = 0;
    for (i = 0; i < input; ++i) {
        str_list[i] = (char *)malloc(sizeof(char) * size);
    }

    for (i = 0; i < input; ++i) {
        scanf("%s%*c", str_list[i]);
    }

    for (i = 0; i < input; ++i) {
        puts(str_list[i]);
    }

    for (i = 0; i < input; ++i) {
        free(str_list[i]);
    }
    free(str_list);

    return 0;
}
