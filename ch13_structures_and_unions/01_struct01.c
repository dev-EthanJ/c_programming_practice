// 구조체 선언 및 정의, 구조체 멤버 접근 연산자 사용
#include <stdio.h>
#include <string.h>

struct USERDATA
{
    int age;
    char name[32];
    char phone[32];
};

int main(void)
{
    struct USERDATA user = { 0, " ", " " };

    user.age = 10;
    strcpy(user.name, "Insung");
    strcpy(user.phone, "010-1234-5678");

    printf("%d살, %s, %s", user.age, user.name, user.phone);

    return 0;
}