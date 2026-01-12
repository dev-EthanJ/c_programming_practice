// strcat() 함수는 대상 메모리의 문자열 길이를 측정 strlen() 할 수 밖에 없다
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char path[128] = { "C:\\Program Files\\" };

    strcat(path, "EthanJ");
    strcat(path, "\\c_programming");
    puts(path);

    strcpy(path, "C:\\Documents\\");
    strcat(path + strlen("C:\\Documents\\"), "EthanJ");
    strcat(path + strlen("C:\\Documents\\EthanJ"), "\\c_programming");
    puts(path);

    return 0;
}