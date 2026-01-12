// Call by reference Swap
#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[])
{
    int x = 10, y = 20;

    Swap(&x, &y);
    printf("%d, %d\n", x, y);

    return 0;
}