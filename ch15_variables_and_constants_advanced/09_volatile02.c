// 형한정어 volatile
#include <stdio.h>

int main(void)
{
    volatile int data = 10;
    int i = 0;
    
    // release 모드에서도 반드시 실행
    for (i = 0; i < 100; ++i)
        data = 10;

    printf("%d\n", data);

    return 0;
}