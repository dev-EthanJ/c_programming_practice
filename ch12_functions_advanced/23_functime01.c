// 시간 관련 함수
#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    struct tm *time_data = { 0 };
    time_t t = 0;

    // 전체 초 수 반환
    t = time(NULL);
    // tm 구조체 반환
    time_data = localtime(&t);

    // N초 출력
    printf("%d\n", t);
    // 문자열 출력
    printf("%s\n", ctime(&t));
    // tm 구조체 멤버 출력
    printf("%04d-%02d-%02d\n",
        time_data -> tm_year + 1900,
        time_data -> tm_mon + 1, time_data -> tm_mday    
    );

    return 0;
}