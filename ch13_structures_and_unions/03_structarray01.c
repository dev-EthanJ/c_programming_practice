// 구조체의 배열
#include <stdio.h>

typedef struct USERDATA
{
    int age;
    char name[32];
    char phone[32];
} USERDATA;

int main(int argc, char* argv[])
{
    USERDATA userlist[4] = {
        { 20, "김가인", "1234" },
        { 21, "정나인", "2345" },
        { 27, "주다인", "3456" },
        { 32, "김라인", "4567" }
    };

    int i = 0;
    for (i = 0; i < sizeof(userlist) / sizeof(USERDATA); ++i) {
        printf("%d살, %s, %s\n",
            userlist[i].age, userlist[i].name, userlist[i].phone
        );
    }

    return 0;
}