// 코드 분할의 좋은 예시, Call by reference의 활용
#include <stdio.h>

void InitList(int *list, int size)
{
    int i = 0;
    for (i = 0; i < size; ++i) {
        printf("정수를 입력하세요.: ");
        scanf("%d", &list[i]);
    }
}

void SortList(int *list, int size)
{
    int i = 0, j = 0, temp = 0;

    for (i = 0; i < size - 1; ++i) {
        for (j = i + 1; j < size; ++j) {
            if (list[j] < list[i]) {
                temp = list[j];
                list[j] = list[i];
                list[i] = temp;
            }
        }
    }
}

void PrintList(int *list, int size)
{
    int i = 0;
    for (i = 0; i < size; ++i) {
        printf("%d\t", list[i]);
    }
    putchar('\n');
}

int main(int argc, char* argv[])
{
    int my_list[5] = { 0 };

    InitList(my_list, 5);
    SortList(my_list, 5);
    PrintList(my_list, 5);

    return 0;
}