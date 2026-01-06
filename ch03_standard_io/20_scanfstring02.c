#include <stdio.h>

int main(void)
{
    char szLeft[32] = { 0 };
    char szRight[32] = { 0 };

    scanf("%s%s", szLeft, szRight);
    printf("%s %s", szLeft, szRight);

    return 0;
}