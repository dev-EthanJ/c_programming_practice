// 형 재선언 typedef
#include <stdio.h>

// 새로운 자료형으로 인식
typedef const char* STR;

// #define은 단순 치환

int main(void)
{
    STR data = NULL;
    data = "HelloWorld";
    printf("%s\n", data);

    return 0;
}
