// 정적변수 static
#include <stdio.h>

int AddData(void)
{
    // 지역변수지만 데이터영역의 정적변수
    // 함수가 여러번 호출되어도 한번만 생성 및 유지
    // 동시성 concurrency 지원 어려움, 병렬처리 어려움, 성능 하락 가능성 있음
    static int data = 10;

    ++data;
    return data;
}

int main(int argc, char* argv[])
{
    printf("%d\n", AddData());
    printf("%d\n", AddData());
    printf("%d\n", AddData());
    printf("%d\n", AddData());

    return 0;
}