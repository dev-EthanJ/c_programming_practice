// 포인터의 배열과 다중 포인터 혼합
#include <stdio.h>

int main(int argc, char* argv[])
{
    char* strlist[3] = { "Hello", "World", "String" };
    char* *pp_strlist = strlist;
    char** *ppp_strlist = &pp_strlist;

    puts(pp_strlist[0]);
    puts(pp_strlist[1]);
    puts(pp_strlist[2]);

    puts(*ppp_strlist[0]);
    puts(*(*(ppp_strlist + 0) + 1));

    return 0;
}