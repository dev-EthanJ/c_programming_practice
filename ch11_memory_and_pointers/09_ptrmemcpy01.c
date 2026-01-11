// 메모리 복사
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[12] = { "HelloWorld" };
    char new_buffer[12] = { 0 };

    memcpy(new_buffer, buffer, 4);
    puts(new_buffer);

    memcpy(new_buffer, buffer, 6);
    puts(new_buffer);

    memcpy(new_buffer, buffer, sizeof(buffer));
    puts(new_buffer);

    return 0;
}