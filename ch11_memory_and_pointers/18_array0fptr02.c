// main()함수의 원형의 parameter는 포인터의 배열
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 0;
    for (i = 0; i < argc; ++i) {
        puts(argv[i]);
    }

    puts("END");

    return 0;
}