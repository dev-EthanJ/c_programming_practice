// 파일 입출력 포인터 file io pointer
#include <stdio.h>

int main(void)
{
    FILE* file = NULL;
    file = fopen("test.dat", "rb");

    fseek(file, 0, SEEK_END);
    printf("Size of test.dat: %d\n", ftell(file));

    return 0;
}