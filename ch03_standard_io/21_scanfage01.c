#include <stdio.h>

int main(void)
{
    char szName[32] = { 0 };
    int nAge = 0;

    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);

    printf("이름을 입력하세요. : ");
    //입력 버퍼(stdin)에 남아있는 개행문자('\n')를 읽고 바로 반환
    gets(szName);

    printf("%d, %s\n", nAge, szName);
    return 0;
}