// 변수와 메모리, storage-class specifier
#include <stdio.h>

int main(int argc, char* argv[])
{
    // auto int list[3] == int list[3]
    auto int list[3] = {10, 20, 30};
    auto int i = 0;

    for (i = 0; i < 3; ++i) {
        printf("%d\t", list[i]);
    }
    putchar('\n');

    return 0;
}