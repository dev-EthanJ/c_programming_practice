#include <stdio.h>

int main(void)
{
    int nAge = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);

    if (nAge >= 20)
        printf("당신은 성인이며, 당신의 나이는 %d세 입니다.\n", nAge);

    puts("End");

    return 0;
}