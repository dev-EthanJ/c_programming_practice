// 메모리 동적 할당 및 관리
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = NULL, i = 0;

    list = (int *)malloc(sizeof(int) * 3);

    list[0] = 0;
    list[1] = 1;
    list[2] = 2;

    for (i = 0; i < 3; ++i) {
        printf("%d, %d\n", list[i], *(list + i));
    }

    free(list);

    return 0;
}