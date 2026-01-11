// 동적 할당한 메모리를 배열처럼 사용
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buffer[] = { "Hello" };

    char *my_buffer = "Hello";

    char *data = NULL;

    data = (char *)malloc(sizeof(char) * 6);
    data[0] = 'H';
    data[1] = 'e';
    data[2] = 'l';
    data[3] = 'l';
    data[4] = 'o';
    data[5] = '\0';

    puts(buffer);
    puts(my_buffer);
    puts(data);

    buffer[1] = 'i';
//    my_buffer[1] = 'i';
    data[1] = 'i';
    
    puts(data);
    puts(buffer);
    puts(my_buffer);



    return 0;
}