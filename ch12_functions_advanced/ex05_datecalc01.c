// 10일 후와 100일 후의 날짜를 계산하는 프로그램
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = 0;

    now = time(NULL);

    time_t ten_days = 60 * 60 * 24 * 10;
    time_t hundred_days = 60 * 60 * 24 * 100;

    ten_days += now;
    hundred_days += now;

    printf("%s\n", ctime(&ten_days));
    printf("%s\n", ctime(&hundred_days));

    return 0;
}