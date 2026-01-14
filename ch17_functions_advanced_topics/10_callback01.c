// 역호출 구조, call back
#include <stdio.h>
#include <stdlib.h>

// qsort() 함수가 call back할 함수의 선언 및 정의
// main() 함수가 직접 호출하지 않는 함수
int Compare(const void* data1, const void* data2)
{
    return *(int*)data1 - *(int*)data2;
}

int main(void)
{
    int list[5] = {30, 10, 40, 50, 20};
    int i = 0;
    // main()함수의 Callee인 qsort()함수가 다시 Compare()함수를 call, Callee 함수에 의해 역으로 호출(call back)된다
    qsort(list, 5, sizeof(int), Compare);

    for (i = 0; i < 5; ++i)
        printf("%d\t", list[i]);

    return 0;
}