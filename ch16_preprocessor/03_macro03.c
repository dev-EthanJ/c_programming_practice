// 매크로 특수화 연산자 #, ##
#include <stdio.h>

// data를 문자열로 만드는 연산 #data
#define STRING(data) #data

// 매개변수를 붙이는 연산 ##
#define PASTER(a, b) a##b

int main(void)
{
    int data = 10;

    printf("%d\n", PASTER(da, ta));
    printf("%d\n", data);

    printf("%s\n", STRING(data));

    return 0;
}