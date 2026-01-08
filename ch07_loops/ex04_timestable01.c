// 구구단에서 한 단만 출력하기
#include <stdio.h>

int main(void) 
{
    int nLevel = 0, i = 1;
    
    printf("구구단 단수를 입력하세요. : ");
    scanf("%d", &nLevel);

    if (nLevel < 2 || nLevel > 9)
        printf("ERROR");
    else {
        while (i <= 9) {
            printf("%d * %d = %d\n", nLevel, i, nLevel * i);
            ++i;
        }
    }

    return 0;
}