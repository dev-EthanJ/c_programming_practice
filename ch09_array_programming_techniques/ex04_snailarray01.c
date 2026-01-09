// 달팽이 배열 채우기
/*
1   2   3   4   5
16  17  18  19  6
15  24  25  20  7
14  23  22  21  8
13  12  11  10  9
*/

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, flag = 1, counter = 0;
    int direction = 1;
    int last_row = 0, last_col = -1;
    int list[5][5] = { 0 };
    int item_count = 5;
    
    for (item_count = 9; item_count > 0; item_count -= 2) {
        for (i = 0; i < item_count; ++i) {
            if (i < item_count / 2 + 1) {
                last_col += direction;
                list[last_row][last_col] = ++counter;
            }
            else {
                last_row += direction;
                list[last_row][last_col] = ++counter;                    
            }
        }
        direction = -direction;
    }
    

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar('\n');
    }

    return 0;
}