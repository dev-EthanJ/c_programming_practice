// strcat()에서 문자열이 붙여질 대상 메모리를 이어서 계산하는 사용자 정의 함수
#include <stdio.h>
#include <string.h>

char* mystrcat(char* dst, char* src)
{
    char* start = dst;

    // 대상 메모리의 문자열 끝 확인
    while (*dst != '\0')
        ++dst;

    // 문자열 이어붙이기
    while (*src != '\0') {
        *dst = *src;
        ++dst;
        ++src;   
    }

    *dst = '\0';

    return dst;
}

int main(int argc, char* argv[])
{
    char path[128] = { 0 };
    char *end = NULL;

    end = mystrcat(path, "C:\\Program Files\\");
    end = mystrcat(end, "EthanJ\\");
    end = mystrcat(end, "c_programming");
    puts(path);

    return 0;
}
