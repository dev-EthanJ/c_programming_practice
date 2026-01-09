// 문자열의 끝이 '\0'(NULL)인 이유
#include <stdio.h>

int main(void)
{
    char szBuffer[32] = { 0 };
    int nLength = 0;

    printf("Input your name: ");
    gets(szBuffer);

    while (szBuffer[nLength] != '\0') {
        nLength++;
    }

    printf("Your name is %s.(%d)\n", szBuffer, nLength);

    return 0;
}