// 메모리 초기화 및 사용
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *list = NULL, *new_list = NULL;
    // 배열 선언 및 정의(0 초기화)
    int my_list[3] = { 0 };

    // 메모리 동적할당 후 0으로 초기화
    list = (int *)malloc(sizeof(int) * 3);
    memset(list, 0, sizeof(int) * 3);

    // 0으로 초기화된 메모리를 동적할당
    new_list = (int *)calloc(3, sizeof(int));

    int i = 0;
    for (i = 0; i < 3; ++i) {
        printf("%d, %d, %d\n", my_list[i], list[i], new_list[i]);
    }

    free(list);
    free(new_list);

    return 0;
}