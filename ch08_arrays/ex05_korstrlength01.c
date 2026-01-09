// 한글 문자열의 길이 출력
#include <stdio.h>

int main(void) 
{
    char szBuffer[1024] = { 0 };
    int nKorBytes = 0, nTotalBytes = 0;
    char ch = 0;

    // 한글 한 글자의 바이트 수 구하기
    char oneKor[] = {"가"};
    while ((ch = oneKor[nKorBytes]) != '\0') {
        ++nKorBytes;
    }

    // printf("한글 한 글자의 바이트수 = %d\n", nKorBytes);
    printf("한글 문자열을 입력하세요: ");
    scanf("%s", szBuffer);

    nTotalBytes = 0;
    while ((ch = szBuffer[nTotalBytes]) != '\0') {
        ++nTotalBytes;
    }

    printf("한글 문자의 갯수: %d개\n", nTotalBytes / nKorBytes);

    return 0;
}