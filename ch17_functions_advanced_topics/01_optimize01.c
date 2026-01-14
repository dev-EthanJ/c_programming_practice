// 컴파일러 최적화
// 변수에 대한 최적화를 넘어서 함수에 대한 최적화까지 진행
#include <stdio.h>

// Release mode 빌드시 해당 함수가 아예 번역되지 않는다
int Add(int a, int b)
{
    int result = 0;
    result = a + b;
    return result;
}

int main(void)
{
    int result = 0;
    // 리터럴 상수를 parameter로 전달, 함수 실행되지 않음
    result = Add(3, 4);
    printf("%d\n", result);

    return 0;
}