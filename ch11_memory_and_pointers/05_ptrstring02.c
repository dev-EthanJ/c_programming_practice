// 주소 차이를 이용해 문자열의 길이를 측정하기
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[16] = { "Hello" };
    char *data = buffer;

    while (*data != '\0') {
        ++data;
    }

    printf("Length: %d\n", data - buffer);
    printf("Length: %d\n", strlen("Hello"));

    // 배열 데이터 갯수 측정하기
    int array[16] = {1, 2, 3, 4, 5, 6};
    int *arr = array;

    while (*arr != 0) {
        ++arr;
    }

    printf("Length: %d\n", arr - array);

    return 0;
}