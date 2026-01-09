// 버블정렬
#include <stdio.h>

int main(void)
{
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, nTmp = 0;

    for (i = 4; i > 0; --i) { // 결정되는 마지막 비교 인덱스
        for (j = 0; j < i; ++j) { 
            if (aList[j] > aList[j+1]) { // 인접한 두 항 비교
                nTmp = aList[j+1];
                aList[j+1] = aList[j];
                aList[j] = nTmp;
            }
        } 
    }

    for (i = 0; i < 5; ++i)
        printf("%d\t", aList[i]);

    return 0;
}