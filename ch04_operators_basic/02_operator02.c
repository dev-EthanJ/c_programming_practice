#include <stdio.h>

int main(void)
{
    int nResult = 0;

    // nResult에 2저장
    // 연산의 결과도 임시결과이므로 필요하다면 변수에 저장해서 사용한다
    nResult = 3 + 4 - 5;
    printf("nResult - 5 : %d\n", nResult - 5);

    return 0;
}