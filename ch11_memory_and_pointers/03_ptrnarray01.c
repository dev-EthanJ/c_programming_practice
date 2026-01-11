// 포인터와 배열, 배열의 이름이 주소이므로 포인터 변수에 저장할 수 있다
#include <stdio.h>

int main(void)
{
    int list[5] = { 0 };
    int *data = list;

    printf("list[0]: %d\n", list[0]);

    *data = 20;
    printf("list[0]: %d\n", list[0]);

    *(data + 1) = 30;
    printf("list[1]: %d\n", list[1]);

    printf("%p, %p\n", data, data + 1);

    return 0;
}