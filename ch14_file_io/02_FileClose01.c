// _fcloseall() 함수
#include <stdio.h>

int main(void)
{
    FILE *file = NULL;
    int closed = 0;

    fopen("test1.txt", "w");
    fopen("test2.txt", "w");
    fopen("test3.txt", "w");

    closed = _fcloseall();
    printf("%d\n", closed);

    return 0;
}