// fflush() 함수
#include <stdio.h>

int main(void)
{
    FILE *file = stdin;
    printf("Input String: ");

    printf("getchar() - %c\n", getchar());
    // 버퍼에 남아있는 문자의 개수(_cnt)와 내용 정보 출력
    printf("[%d] %s", file->_cnt, file->_base);
    // _ptr: 읽어올 대상의 메모리 주소, _base: 입출력 버퍼 시작주소, 
    printf("READ: %d\n", file->_ptr - file->_base);

    printf("\n\n");

    printf("getchar() - %c\n", getchar());
    printf("[%d] %s", file->_cnt, file->_base);
    printf("READ: %d\n", file->_ptr - file->_base);

    printf("\n\n");

    fflush(file);
    // _base값은 유지
    printf("After flushing\n[%d] %s",
        file->_cnt, file->_base);
    printf("READ: %d\n", file->_ptr - file->_base);

    return 0;
}