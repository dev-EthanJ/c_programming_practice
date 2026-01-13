#include <stdio.h>
#include <stddef.h>  

typedef struct Test {
    char a;
    int b;
    char c;
} TEST;

typedef struct CHAR {
    char a;
    char b;
    char c;
} CHAR;

int main(void) {
    printf("전체: %zu\n", sizeof(TEST));
    printf("a 오프셋: %zu\n", offsetof(TEST, a));
    printf("b 오프셋: %zu\n", offsetof(TEST, b));
    printf("c 오프셋: %zu\n", offsetof(TEST, c));

    printf("전체: %zu\n", sizeof(CHAR));
    printf("a 오프셋: %zu\n", offsetof(CHAR, a));
    printf("b 오프셋: %zu\n", offsetof(CHAR, b));
    printf("c 오프셋: %zu\n", offsetof(CHAR, c));
    return 0;
}