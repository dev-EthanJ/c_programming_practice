// 형 재선언 typedef
#include <stdio.h>

// 새로운 자료형으로 인식
typedef unsigned int UINT;

int main(void)
{
    UINT data = 10;
    printf("%u\n", data);

    return 0;
}