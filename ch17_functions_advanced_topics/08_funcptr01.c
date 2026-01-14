// 함수 포인터
#include <stdio.h>

int __cdecl main(void)
{
    // 함수이름도 '주소상수'의 식별자, 포인터 변수에 저장할 수 있다
    void *data = main;

    printf("%p\n", main);
    printf("%p\n", data);

    return 0;
}