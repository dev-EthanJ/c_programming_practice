// system() 함수
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char command[512] = { 0 };
    printf("Input command: ");
    fgets(command, sizeof(command), stdin);

    system(command);

    return 0;
}