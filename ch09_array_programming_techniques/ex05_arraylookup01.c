// Lookup배열을 이용한 요금계산
#include <stdio.h>

int main(void)
{
    double rate[10] = {
        0.0, 0.1, 0.25, 0.5, 0.5, 0.6, 0.65, 0.8, 0.82, 0.97
    };
    int age = 0, i = 0, fee = 1000;

    printf("요금표\n");
    for (i = 0; i < 10; ++i) {
        printf("%d세 요금 : \t%d원\n", i + 1, (int)(fee * rate[i]));
    }
    putchar('\n');

    printf("나이를 입력하세요. : ");
    scanf("%d", &age);
    if (age < 1) age = 1;
    if (age > 10) age = 10;

    printf("최종 요금: %d원\n", (int)(fee * rate[age - 1]));

    return 0;
}