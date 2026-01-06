#include <stdio.h>

int main(void)
{
    char szName[32] = { 0 };
    int nAge = 0;

    printf("나이를 입력하세요. : ");
    //입력 버퍼(stdin)에 남아있는 개행문자('\n')를 꺼내서 버림
    scanf("%d%*c", &nAge);

    printf("이름을 입력하세요. : ");
    gets(szName);

    printf("%d, %s\n", nAge, szName);
    return 0;
}