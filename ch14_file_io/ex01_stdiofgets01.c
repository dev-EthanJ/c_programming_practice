// stdin로 fgets()로 입력받고, stdout으로 fputs()를 통해 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    char buffer[512] = { 0 };

    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, stdout);

    return 0;
}