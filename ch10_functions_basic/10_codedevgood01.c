// 의존성을 낮춘 코드
#include <stdio.h>

void InitList(int *p_list, int size)
{
    int i = 0;
    for (i = 0; i < size; ++i) {
        printf("정수를 입력하세요. : ");
        scanf("%d", &p_list[i]);
    }
}

void SortList(int *p_list, int size)
{
    int i = 0, j = 0, temp = 0;

    for (i = 0; i < size - 1; ++i) {
        for (j = i + 1; j < size; ++j) {
            if (p_list[i] > p_list[j]) {
                temp = p_list[i];
                p_list[i] = p_list[j];
                p_list[j] = temp;
            }
        }
    }
}

void PrintList(int *p_list, int size)
{
    int i = 0;
    for (i = 0; i < size; ++i)
        printf("%d\t", p_list[i]);
    putchar('\n');
}

int main(void)
{
    int list[6] = { 0 };

    InitList(list, 6);
    SortList(list, 6);
    PrintList(list, 6);

    return 0;
}
