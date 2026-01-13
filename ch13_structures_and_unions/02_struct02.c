// typedef를 이용한 형 재선언
#include <stdio.h>
#include <string.h>

typedef struct USERDATA
{
    int age;
    char name[32];
    char phone[32];
} USERDATA;

int main(void)
{
    USERDATA user = { 0, "", "" };

    user.age = 10;
    strcpy(user.name, "Jang");
    strcpy(user.phone, "010-1234-5678");

    printf("%d살, %s, %s\n", user.age, user.name, user.phone);

    return 0;
}