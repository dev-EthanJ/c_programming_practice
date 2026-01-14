// const가 수식하는 대상이 달라지는 경우
#include <stdio.h>

int main(void)
{
    int data = 10;

    // 포인터가 가리키는 대상을 const화
    const int *my_data = &data;

    // 포인터 변수 자체를 const화
    int* const new_data = &data;

    // 아래 둘다 ERROR
    // *my_data = 20;
    // new_data = NULL;

    // 가리키는 대상을 상수화 했으므로 포인터 변수 자체는 값 변경 가능
    my_data = NULL;

    // 포인터 변수 자체를 상수화 했으므로 가리키는 대상은 값 변경 가능
    *new_data = 20;
    printf("%d\n", *new_data);

    return 0;
}