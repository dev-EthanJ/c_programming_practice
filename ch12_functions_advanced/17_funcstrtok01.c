// strtok() 함수 사용
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char buffer[128] = { "data = x + y; \n result = a * b;"};
    char *sep = " *+-/=;\n";
    char *token = NULL;

    token = strtok(buffer, sep);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, sep);
    }

    printf("buffer: %s\n", buffer);

    return 0;
}