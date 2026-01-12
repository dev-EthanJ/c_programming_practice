// 유니코드 문자열, wcspy(), wprinf() 함수 사용
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    wchar_t *data = L"String";
    wchar_t new_data[32];

    wcscpy(new_data, data);
    wprintf(L"%s\n", new_data);

    return 0;
}