// 가변인자 사용하기
#include <stdio.h>
#include <stdarg.h>

int GetMax(int count, ...)
{
    int max = 0, data = 0, i = 0;
    va_list list = NULL;

    va_start(list, count);

    max = va_arg(list, int);
    for (i = 1; i < count; ++i) {
        data = va_arg(list, int);

        if (data > max) max = data;
    }

    va_end(list);

    return max;
}

int main(void)
{
    printf("MAX: %d\n", GetMax(3, 40, 20, 10));
    printf("MAX: %d\n", GetMax(4, 40, 20, 10, 50));
    printf("MAX: %d\n", GetMax(5, 40, 20, 10, 30, 45));

    return 0;
}