// 유니코드 문자열, wcstombs(), mbstowcs() 함수 사용
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    wchar_t *data = L"String";
    char new_data[32] = "String";
    char mbcs[32];
    size_t converted = 0;
    
    // 변환된 문자열 길이 알아낸다
    converted = wcstombs(mbcs, data, 32);
    printf("[%d] %s\n", converted, mbcs);

    return 0;
}