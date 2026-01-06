#include <stdio.h>

int main(void) 
{
    //자료형이 char이고 이름이 ch인 변수의 선언 및 정의
    char ch = '0';

    //getchar() 함수가 반환한 값을 ch변수에 저장
    ch = getchar();

    //변수 ch에 담겨있는 정보를 출력
    putchar(ch);

    //대문자 'Z'를 화면에 출력
    putchar('Z');

    //0을 반환하고 프로그램 종료
    return 0;
}