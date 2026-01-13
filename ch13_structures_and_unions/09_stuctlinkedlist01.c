// 구조체 연결 리스트
#include <stdio.h>

typedef struct USERDATA
{
    char name[32];
    char phone[32];
    struct USERDATA *next;
} USERDATA;


int main(void)
{
    USERDATA userlist[4] = {
        { "김가인", "1234", NULL },
        { "이나인", "2345", NULL },
        { "박다인", "3456", NULL },
        { "최라인", "4567", NULL }
    };

    int i = 0;
    for (i = 0; i < 3; ++i) {
        userlist[i].next = &(userlist[i + 1]);
    }

    USERDATA* user = &userlist[0];

    while (user != NULL) {
        printf("%s, %s\n", user->name, user->phone);
        user = user->next;
    }

    return 0;
}