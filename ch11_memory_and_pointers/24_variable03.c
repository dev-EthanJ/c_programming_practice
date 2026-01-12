// register 레지스터 변수
#include <stdio.h>

int main(int argc, char* argv[])
{
    // CPU의 레지스터 사용한 변수
    register int i = 0;

    printf("%d\n", i);
    // register variable은 CPU의 일부이므로 별도로 주소가 없다
    // printf("[%p]\n", &i); (X)

    return 0;
}