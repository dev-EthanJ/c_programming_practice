// 인라인 함수
#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

__inline int NewAdd(int a, int b)
{
    return a + b;
}

int main(void)
{
    // 최적화 인라인 함수 확장 설정이 '__inline만 확장일 경우'

    // Add()는 실제 함수를 스택영역에 넣고 호출, 일반 함수로 번역되어 사용
    printf("%d\n", Add(3, 4));
    // NewAdd()는 인라인 처리 
    printf("%d\n", NewAdd(3, 4));

    return 0;
}