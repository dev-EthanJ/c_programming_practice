#include <stdio.h>

int main(void)
{
    int nItem = 0;
    scanf("%d", &nItem);

    if (nItem > 10) {
        int nItem = 20;
        printf("%d\n", nItem);

        // 비교대상 변수는 가장 가까운 블록스코프 내에서 선언된 변수
        // 아래 조건문은 항상 0이다        
        if (nItem < 20) {
            int nItem = 30;
            printf("%d\n", nItem);
        }
    }

    printf("%d\n", nItem);

    return 0;
}