// Callee 함수가 동적 할당한 메모리를 Caller 함수에서 해제
#include <stdio.h>
#include <stdlib.h>

char* GetName(void)
{
    char *name = NULL;

    // 메모리 동적할당
    name = (char *)calloc(32, sizeof(char));
    printf("이름을 입력하세요. :");
    fgets(name, sizeof(char) * 32, stdin);

    return name;
}

int main(int argc, char* argv[])
{
    char *my_name = NULL;

    my_name = GetName();
    printf("당신의 이름은 %s입니다.\n", my_name);

    // 동적할당 메모리 해제
    free(my_name);
    return 0;
}