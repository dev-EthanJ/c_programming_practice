#include <stdio.h>

int main(void)
{
    //실수 자료형의 메모리 크기(N bytes)를 출력
    printf("%d\n", sizeof(123.456F));
    printf("%d\n", sizeof(123.456));

    //float형식을 실수형식으로 출력
    printf("%f\n", 123.456F);

    //double형식을 실수형식으로 출력
    printf("%f\n", 123.456);
    printf("%lf\n", 123.456);

    return 0;
}