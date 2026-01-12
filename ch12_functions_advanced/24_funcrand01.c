// srand(), rand() 함수
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int i = 0;
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; ++i) {
        printf("%6d\t", rand());
    }
    putchar('\n');

    for (i = 0; i < 10; ++i) {
        printf("%6d\t", rand() % 10);
    }

    return 0;
}