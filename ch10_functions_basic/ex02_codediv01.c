// 코드 분할
#include <stdio.h>

int GetData(void)
{
    int data = 0;
    printf("정수를 입력하세요. : ");
    scanf("%d", &data);

    return data;
}

int GetMax(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

void PrintData(int a, int b, int c, int max) {
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", a, b, c, max);

    return;
}

int main(void)
{
    int list[3] = { 0 };
    int max = 0, i = 0;

    for (i = 0; i < 3; ++i) {
        list[i] = GetData();
    }

    max = GetMax(list[0], list[1], list[2]);

    PrintData(list[0], list[1], list[2], max);

    return 0;
}

