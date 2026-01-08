#include <stdio.h>

int main(void)
{
    int nAge = 0, nFare = 1000;
    int nRate;

    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);

    if (nAge >= 14) {
        if (nAge >= 20) nRate = 0;
        else nRate = 25;
    }
    else {
        if (nAge >= 4) nRate = 50;
        else nRate = 100;
    }

    printf("최종 요금: %d원\n", nFare - (nFare * nRate / 100));

    return 0;
}