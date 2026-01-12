// 다차원 배열에 대한 포인터
#include <stdio.h>


int main(int argc, char* argv[])
{
    char strlist[2][12] = { "Hello", "World" };
    //char* *p_str = strlist; (X)
    char (*p_list)[12] = strlist;

    puts(p_list[0]);
    puts(p_list[1]);

    return 0;
}