// 잘못된 주소 전달, Callee함수는 유효한 메모리 주소를 반환해야 한다
#include <stdio.h>

int* GetData(void)
{
    int data = 10;
    // 함수가 종료되면 사라질 자동 지역변수의 주소를 반환 > 컴파일 에러
    return &data;
}

int main(int argc, char* argv[])
{
    int *result = NULL;
    result = GetData();

    // 유효하지 않은 메모리
    printf("%d\n", *result);
    return 0;
}
