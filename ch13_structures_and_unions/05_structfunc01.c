// 구조체 반환자료, 구조체 매개변수 Call by value
#include <stdio.h>

// 구조체 선언
typedef struct USERDATA
{
    int age;
    char name[32];
    char phone[32];
} USERDATA;

// 구조체를 반환하는 함수 선언 및 정의
USERDATA GetUserData(void)
{
    USERDATA user = { 0 };
    scanf("%d%*c", &user.age);
    fgets(user.name, sizeof(user.name), stdin);
    fgets(user.phone, sizeof(user.phone), stdin);

    return user;
}

int main(void)
{
    USERDATA my_user = { 0 };

    my_user = GetUserData();
    printf("%d살, %s, %s\n",
     my_user.age, my_user.name, my_user.phone);

    return 0;
}