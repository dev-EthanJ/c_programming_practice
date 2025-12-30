#include <stdio.h>

int main(void) {
    char ch1 = 'A', ch2 = 'B', ch3 = 'C';
    char szData[4] = {'A', 'B', 'C'};
    char szNewData[4] = {"ABC"};
    // 문자열(X), 문자배열(O), 상수화된 문자배열(O) >> 실행할 때마다 다른 주소 부여됨
    // 문자열의 끝은 NULL문자(\0)
    printf("%s\n%s", szData, szNewData);
    return 0;
}
