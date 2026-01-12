#include <stdio.h>
#include <locale.h>

int main(void) {
    //setlocale(LC_ALL, "");
    
    char mbcs[] = "가";
    wchar_t wide[] = L"가";
    
    printf("char 크기: %zu바이트\n", sizeof(mbcs) - 1);
    printf("wchar_t 크기: %zu바이트\n", sizeof(wide) - 2);
    
    return 0;
}