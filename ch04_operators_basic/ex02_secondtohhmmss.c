#include <stdio.h>

int main(void)
{
    int nInput = 0;

    printf("초를 입력하세요 : ");
    scanf("%d", &nInput);

    int nHour = 0, nMin = 0, nSec = 0;

    nHour = nInput / (60 * 60);
    nMin = nInput % (60 * 60) / 60; 
    nSec = nInput % 60;

    printf("%d초는 %02d시간 %02d분 %02d초 입니다.",
    nInput, nHour, nMin, nSec);

    return 0;
}