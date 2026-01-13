// 구조체 멤버 1바이트 맞춤
#include <stdio.h>

#pragma pack(push, 1)

typedef struct USERDATA
{
    char ch;
    int age;
} USERDATA;

typedef struct MYDATAW
{
    char ch;
    int age;
    double data;
} MYDATA;

#pragma pack(pop)

int main(void)
{
    printf("%d\n", sizeof(USERDATA));
    printf("%d\n", sizeof(MYDATA));

    return 0;
}