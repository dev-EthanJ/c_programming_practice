// 검색해서 인덱스 반환하는 함수
#include <stdio.h>
#include <string.h>

int SearchString(char* src, char* find)
{
    int src_index = 0, find_index = 0, flag = 1, len = 0, i = 0;
    len = strlen(find);

    while(flag) {
        for (i = 0; i < len; ++i) {
            if (src[src_index + i] == find[find_index + i]) {
                // i < len까지 모두 일치해야 while 종료
                flag = 0;
            }
            else { // 값이 다르면
                // 다음 비교 시작위치 설정
                src_index = src_index + 1;
                //while 이어서 진행
                flag = 1;
                break;
            }
        }
        find_index = 0;
        // 끝까지 못찾으면
        if (src_index > strlen(src)) return -1;
    }
    
    return src_index;
}

int main(void)
{
    printf("%d\n", SearchString("HelloEthanJWorld", "EthanJ"));
    printf("%d\n", SearchString("HelloEthanJWorld", "orld"));
    printf("%d\n", SearchString("HelloEthanJWorld", "then"));
    printf("%d\n", SearchString("hello", "elxo"));

    printf("%d\n", SearchString("hello world", "wor"));
    printf("%d\n", SearchString("hello world", "xyz"));
    printf("%d\n", SearchString("aaab", "aab"));

    return 0;
}