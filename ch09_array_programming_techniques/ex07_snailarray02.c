// couterclockwise 반시계방향 달팽이 배열
#include <stdio.h>

int main(void) 
{
    int last_row = 0, last_col = 5, counter = 0;
    int i = 0, j = 0, offset = -1, item_count = 0;
    int list[5][5] = { 0 };

    for (item_count = 9; item_count > 0; item_count -= 2) {
        for (i = 0; i < item_count; ++i) {
            if (i < item_count / 2 + 1) {
                last_col += offset;
                list[last_row][last_col] = ++counter;        
            }
            else {
                last_row -= offset;
                list[last_row][last_col] = ++counter;
            }
        }
        offset = -offset;
    }

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar('\n');
    }

    return 0;
}