// 컴파일러 최적화
#include <stdio.h>

int Add(int a, int b)
{
    int result = a + b;
    return result;
}

int main(void)
{
    int result = 0, x, y;
    scanf("%d%d", &x, &y);
    
    // 리터럴 상수가 아닌 사용자의 입력에 따라 바뀌는 변수를 parameter로 전달
    // 인라인 함수 확장 설정이 '적합한 것 모두 확장'일 경우 Add() 함수는 인라인함수처럼 함수 오버헤드 없이 실행
    result = Add(x, y);
    printf("%d\n", result);

    return 0;
}