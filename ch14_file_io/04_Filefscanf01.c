// fscanf() 함수
#include <stdio.h>

int main(void)
{
    int data = 0;
    char buffer[128] = { 0 };
    FILE *file = NULL;

    file = fopen("fscanftest.txt", "w");
    fprintf(file, "%d, %s\n", 20, "Test String");
    fclose(file);

    // %s는 공백 전까지 읽어들임
    file = fopen("fscanftest.txt", "r");
    fscanf(file, "%d, %s", &data, buffer);
    fclose(file);

    printf("%d, %s\n", data, buffer);

    return 0;
}