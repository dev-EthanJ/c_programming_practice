// Call by reference, 매개변수가 포인터일때 대상 메모리의 크기도 같이 전달하자
#include <stdio.h>

void GetName(char* name, int size)
{
    printf("이름을 입력하세요. :");
    //scanf("%s", name);
    fgets(name, size, stdin);
}

int main(int argc, char *argv[])
{
    char my_name[32] = { 0 };

    GetName(my_name, 32);
    printf("당신의 이름은 %s입니다. \n", my_name);

    return 0;
}
