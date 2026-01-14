// 외부변수 extern 정의
// 11_VariableExtern02.c

#include <stdio.h>

int g_counter = 0;

void InitCounter(int data)
{
    g_counter = data;
}

void IncreaseCounter()
{
    g_counter++;
}