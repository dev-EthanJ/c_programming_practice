// strpbrk() 함수를 이용한 구문분석
// string + pointer + break, char set의 첫번째 발견 pointer를 반환하고 break한다
#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[])
{
    char buffer[128] = { 0 };
    char char_set[128] = { 0 };
    char *start_point = buffer;

    printf("Input String: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("Input character Set: ");
    fgets(char_set, sizeof(char_set), stdin);

    while ((start_point = strpbrk(start_point, char_set)) != NULL) {
        printf("[%p] Index: %d, %c\n",
            start_point, start_point - buffer, *start_point);
        
        ++start_point;
    }

    return 0;
}