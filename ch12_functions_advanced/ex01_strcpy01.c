// strcpy() 함수 구현하기
#include <stdio.h>
#include <string.h>

int MyStrcpy(char* dst, int size, const char* src)
{
    int i = 0, len = 0;
    len = strlen(src);

    //유효한 크기인지 검사
    if (len + 1 > size) {
        return size - (len + 1);
    }

    while (src[i] != '\0') {
        dst[i] = src[i];
        ++i;
    }

    dst[i] = '\0';
    return len;
}


int main(int argc, char* argv[])
{
    char buffer_src[12] = { "TestString" };
    char buffer_dst[12] = { 0 };

    MyStrcpy(buffer_dst, sizeof(buffer_dst), buffer_src);
    puts(buffer_dst);

    return 0;
}