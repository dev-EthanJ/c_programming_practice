// 다음 코드의 중대한 오류를 찾아서 고쳐라
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char buffer[12] = { "HelloWorld" };
    char *data = NULL;

    data = (char *)malloc(sizeof(char) * 12);
    
    // data = buffer; 
    // Shallow copy(주소복사)가 이루어져서 동적할당 받은 메모리 주소를 잃어버린다

    memcpy(data, buffer, sizeof(buffer));
    puts(data);

    // 메모리 해제 필수
    free(data);

    return 0;
}