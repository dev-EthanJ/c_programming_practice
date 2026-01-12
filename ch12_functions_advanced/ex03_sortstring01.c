// 오름차순 정렬
#include <stdio.h>
#include <string.h>

void SortString(char* *list, int size)
{
    int i = 0, j = 0;
    char* temp = NULL;

    for (i = 0; i < size - 1; ++i) {
        for (j = i + 1; j < size; ++j) {
            if (strcmp(list[i], list[j]) > 0)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int main(void)
{
    char* list[5] = {"정가인", "노나인", "하다인", "유라인", "박마인"};
    int i = 0;

    SortString(list, 5);

    for (i = 0; i < 5; ++i) {
        printf("%s\n", list[i]);
    }
    putchar('\n');

    return 0;
}