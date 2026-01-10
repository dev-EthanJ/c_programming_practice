// 전역변수
#include <stdio.h>

int g_counter = 0;

void InitCounter(int data)
{
    g_counter = data;
}

void IncreaseCounter(void)
{
    g_counter++;
}

int main(void)
{
    InitCounter(10);

    printf("%d\n", g_counter);

    IncreaseCounter();
    printf("%d\n", g_counter);

    IncreaseCounter();
    printf("%d\n", g_counter);

    return 0;
}
