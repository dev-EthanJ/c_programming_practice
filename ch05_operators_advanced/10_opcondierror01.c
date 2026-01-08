#include <stdio.h>

int main(void)
{
    int nInput = 0, nSelect = 0;
    scanf("%d", &nInput);

    // 삼항연산자?:가 대입연산자=보다 우선이므로, `= 20`이 가장 나중에 실행됨
    // 결국 (삼항연산자 결과) = 20 인데, r-value에 대입시도하므로 컴파일 에러 
    //Input <= 10 ? nSelect = 10 : nSelect = 20;
    //printf("%d\n", nSelect);

    nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
    printf("%d\n", nSelect);

    return 0;
}