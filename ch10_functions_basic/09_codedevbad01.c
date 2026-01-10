// 전역변수의 오남용, 불필요한 의존관계 형성
#include <stdio.h>

int g_list[5] = { 0 };

void InitList(void)
{   
    int i = 0;
    for (i = 0; i < 5; ++i) {
        printf("정수를 입력하세요. : ");
        scanf("%d", &g_list[i]);
    }
}

void SortList(void)
{
    int i = 0, j = 0, temp = 0;

    for (i = 0; i < 4; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (g_list[j] < g_list[i]) {
                temp = g_list[j];
                g_list[j] = g_list[i];
                g_list[i] = temp;
            }
        }
    }
}

void PrintList(void)
{
    int i = 0;
    for (i = 0; i < 5; ++i) {
        printf("%d\t", g_list[i]);
    }
    putchar('\n');
}

int main(void)
{
    InitList();
    SortList();
    PrintList();

    return 0;
}