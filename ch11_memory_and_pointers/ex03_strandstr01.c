// 입력된 문자열을 동적할당 후 출력하고 입력된 모든 문자열을 붙여서 출력
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char input[256] = { 0 };
    int first_len = 0, second_len = 0;

    char *first_alloc = NULL;
    char *second_alloc = NULL;

    scanf("%s%*c", input);
    first_len = strlen(input);
    first_alloc = (char *)malloc(sizeof(char) * (first_len + 1));
    sprintf(first_alloc, "%s", input);
    printf("%s\n", first_alloc);

    scanf("%s%*c", input);
    second_len = strlen(input);
    second_alloc = (char *)malloc(sizeof(char) * (second_len + 1));
    sprintf(second_alloc, "%s", input);
    printf("%s\n", second_alloc);

    char *final_alloc = (char *)malloc(sizeof(char) * (first_len + second_len + 1));
    if (final_alloc == NULL) {
        free(first_alloc);
        free(second_alloc);
        return 0;
    }

    sprintf(final_alloc, "%s%s", first_alloc, second_alloc);
    printf("%s\n", final_alloc);

    free(final_alloc);
    free(first_alloc);
    free(second_alloc);

    return 0;
}