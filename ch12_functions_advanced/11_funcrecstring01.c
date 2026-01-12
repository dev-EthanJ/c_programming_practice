// 재귀호출 recursive function call로 문자열을 한 문자씩 반복하여 출력
#include <stdio.h>

void PutData(char *data)
{
    if (*data == '\0')
        return;

    putchar(*data);
    PutData(data + 1);
}

int main(int argc, char* argv[])
{
    PutData("TestStringPrint");

    return 0;
}
