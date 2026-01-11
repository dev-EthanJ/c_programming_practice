// 문자열과 상대주소 계산
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[18] = { "You are a girl."};
    char *data = buffer + 4;
    
    int i = 0;
    for (i = 0; i < sizeof(buffer); ++i) {
        printf("%c\t", buffer[i]);
    }
    putchar('\n');
    for (i = 0; i < sizeof(buffer); ++i) {
        printf("[%d]\t", i);
    }
    putchar('\n');

    printf("%c\n", buffer[0]);
    printf("%c\n", data[0]);
    printf("%c\n", data[6]);

    printf("%s\n", buffer + 4);
    printf("%s\n", data);
    printf("%s\n", data + 4);

    {
        //int 배열도 동일하게 적용
        int buffer[18] = { 0 };
        int *data = buffer + 4;
        
        int i = 0;

        for (i = 0; i < sizeof(buffer) / sizeof(int); ++i) {
            buffer[i] = (i + 1) * 10;
        }
        for (i = 0; i < sizeof(buffer) / sizeof(int); ++i) {
            printf("%d\t", buffer[i]);
        }
        putchar('\n');
        for (i = 0; i < sizeof(buffer) / sizeof(int); ++i) {
            printf("[%d]\t", i);
        }
        putchar('\n');

        printf("%d\n", buffer[0]);
        printf("%d\n", data[0]);
        printf("%d\n", data[6]);

        printf("%p\n", buffer + 4);
        printf("%p\n", data);
        printf("%p\n", data + 4);
    }

    return 0;
}