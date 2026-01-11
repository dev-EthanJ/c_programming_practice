// 주소 번지 연산자 &
#include <stdio.h>

int main(void)
{
    int data = 10;
    printf("%s\n", "data");

    // 변수에 들어있는 값 출력
    printf("%d\n", data);
    // 변수의 메모리 주소 출력
    printf("%p\n", &data);

    return 0;
}