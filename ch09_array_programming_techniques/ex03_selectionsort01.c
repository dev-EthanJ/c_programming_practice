// 선택 정렬 selection sort
#include <stdio.h>

int main(void)
{
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, min_index = 0, tmp = 0;

    for (i = 0; i < 5; ++i) { // 확정되는 item의 index
        min_index = i;
        for (j = i + 1; j < 5; ++j) { // 값의 비교 실행
            if (aList[j] < aList[min_index]) {
                min_index = j;
            }
        }
        tmp = aList[min_index];
        aList[min_index] = aList[i];
        aList[i] = tmp;
    }

    for (i = 0; i < 5; ++i) {
        printf("%d\t", aList[i]);
    }

    return 0;
}