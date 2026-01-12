// exit() 함수
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *arhv[])
{
    char ch = 0;
    printf("Do you want to exit? (Y/N)\n");
    ch = _getch();

    if (ch == 'Y' || ch == 'y') {
        puts("EXIT");
        exit(1);
    }

    puts("End of main().\n");

    return 0;
}