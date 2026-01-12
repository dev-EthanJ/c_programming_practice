// 다차원 배열에 대한 포인터
#include <stdio.h>

int main(int argc, char* argv[])
{
    double list[2][3][4] = { 0 };
    int i = 0, j = 0, k = 0, counter = 0;

    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for (k = 0; k < 4; ++k) {
                list[i][j][k] = ++counter * 1.0;
                printf("%3lf\t", list[i][j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    }


    double (*td_array)[3][4] = list;
    double (*od_array)[4] = *td_array;

    printf("[%p] list[0][][], [%p] list[1][][]\n",td_array[0], td_array[1]);
    printf("[%p] list[0][1][], [%p] list[0][2][]\n", od_array[1], od_array[2]);
    printf("[%p] %lf, [%p] %lf\n", od_array[0], od_array[0][0], od_array[1], od_array[1][0]);

    return 0;
}