// 유틸리티 함수, 범위를 벗어난 data
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("%d\n", atoi("2147483647"));
    printf("%d\n", atoi("2147483648"));
    printf("%lf\n", atof("1.7e+308"));
    printf("%lf\n", atof("1.7e+309"));

    return 0;
}