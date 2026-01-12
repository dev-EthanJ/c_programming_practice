// strcat() 함수 사용
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char path[128] = {"C:\\Prograam Files\\"};
    char buffer[128] = { 0 };

    printf("Input path: ");
    //fgets(buffer, sizeof(buffer), stdin);
    scanf("%s%*c", buffer);

    strcat(path, buffer);
    puts(path);

    strncat(path, "\\", sizeof(char) * 2);
    puts(path);

    return 0;
}