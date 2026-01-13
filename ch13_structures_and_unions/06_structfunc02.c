// Call by reference 구조체 반환 자료 및 매개변수
#include <stdio.h>

typedef struct USERDATA
{
    int age;
    char name[32];
    char phone[32];
} USERDATA;

// 포인터를 매개변수로 받아 효율적이다
void GetUserData(USERDATA* user)
{
    scanf("%d%*c", &(user->age));
    fgets(user->name, sizeof(user->name), stdin);
    fgets(user->phone, sizeof(user->phone), stdin);
}

int main(void)
{
    USERDATA my_user = { 0 };

    GetUserData(&my_user);
    printf("%d살, %s, %s\n",
        my_user.age, my_user.name, my_user.phone);

    return 0;
}