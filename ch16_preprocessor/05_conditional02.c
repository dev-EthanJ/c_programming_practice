// 조건부 컴파일을 통한 인코딩 선택
#include <stdio.h>

#define _UNICODE

#ifdef _UNICODE
    typedef wchar_t CHAR;
    #define _(string) L##string
    #define PRINT wprintf
#else
    typedef char CHAR;
    #define _(string) string
    #define PRINT printf
#endif

int main(void)
{
    CHAR data[16] = _("Test String");
    PRINT(_("%s\n"), data);
    PRINT(_("%d, %d\n"), sizeof(CHAR), sizeof(data));

    return 0;
}