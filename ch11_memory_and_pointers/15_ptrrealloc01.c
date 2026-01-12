// realloc() 함수와 sprintf() 함수
#include <stdio.h>
#include <malloc.h>
#include <string.h>


int main(void)
{
    char *buffer = NULL, *new_buffer = NULL;

    buffer = (char *)malloc(12);
    sprintf(buffer, "%s", "TestString");
    printf("[%p] %d %s\n", buffer, _msize(buffer), buffer);

    new_buffer = (char *)realloc(buffer, 32);
    // realloc() 할당에 실패했다면 재할당 시도한 메모리 수동 해제
    if (new_buffer == NULL) {
        puts("realloc() failed");
        free(buffer);
    }

    sprintf(new_buffer, "%s", "TestStringData");
    printf("[%p] %d %s\n", new_buffer, _msize(new_buffer), new_buffer);
    free(new_buffer);

    return 0;
}