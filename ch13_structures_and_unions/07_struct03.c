// 구조체를 멤버로 가지는 구조체
#include <stdio.h>

typedef struct BODY
{
    int height;
    int weight;
} BODY;

typedef struct USERDATA
{
    char name[32];
    char phone[32];
    BODY body;
} USERDATA;

int main(void)
{
    USERDATA user = { "Jang", "1234", {178, 78}};

    printf("%s, %s, %d, %d\n",
        user.name, user.phone, user.body.height, user.body.weight);
    
    return 0;
}