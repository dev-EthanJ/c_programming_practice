// 문자열의 기본 구조
#include <stdio.h>

int main(void)
{
    int aList[5] = { 10, 30, 40, 20, 50 };
    char szBuffer[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

    char szData[8] = { "Hello" };

    char* pszBuffer = "Hello";

    puts(szBuffer);
    puts(szData);
    puts(pszBuffer);

    return 0;
}