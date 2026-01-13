// 구조체 동적 할당
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
    int age;
    char name[32];
    char phone[32];
} USERDATA;

int main(int argc, char* argv[])
{
    USERDATA *user = NULL;
    user = (USERDATA *)malloc(sizeof(USERDATA));

    user->age = 30;
    strcpy(user->name, "김가인" );
    strcpy(user->phone, "1234" );

    printf("%d살\t%s\t%s\n",
        user->age, user->name, user->phone);

    free(user);

    return 0;
}