// 구조체 멤버 메모리 맞춤 struct member align
#include <stdio.h>

typedef struct USERDATA
{
    char ch;
    int age;
} USERDATA;

typedef struct MYDATA
{
    char ch;
    int age;
    double data;
} MYDATA;

int main(void)
{
    // 5로 예상되지만 실제로 8 출력
    printf("%d\n", sizeof(USERDATA));
    // 13으로 예상되지만 실제로 16 출력
    printf("%d\n", sizeof(MYDATA));

    return 0;
}