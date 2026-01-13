// 자기참조 구조체 Self-reference Structure 
#include <stdio.h>

typedef struct USERDATA
{
    char name[32];
    char phone[32];
    struct USERDATA *next;
} USERDATA;

int main(void)
{
    USERDATA user = { "김가인", "1234", NULL };
    USERDATA new_user = { "이나인", "5678", NULL };

    user.next = &new_user;

    printf("%s, %s\n", user.name, user.phone);
    printf("%s, %s\n", user.next->name, user.next->phone);

    return 0;
}