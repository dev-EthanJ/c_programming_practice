# 독하게 시작하는 C 프로그래밍
## Chapter 09. 배열을 활용한 프로그래밍 기법
### 연습문제

1. 요소의 자료형이 int형인 5행 5열 배열을 선언하고 다음과 같이 채운 후 출력하는 프로그램을 작성합니다.
```
1   10  11  20  21
2   9   12  19  22
3   8   13  18  23
4   7   14  17  24
5   6   15  16  25
```

```c
// 열방향 지그재그 배열 채우기
#include <stdio.h>

int main(void)
{
    int list[5][5] = { 0 };
    int i = 0, j = 0, counter = 0;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            if (i % 2 == 0) list[j][i] = ++counter;
            else list[4 - j][i] = ++counter;
        }
    }

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
```

2. 다음과 같이 반시계 방향으로 채워지는 달팽이 배열 프로그램을 작성하세요.

```
5   4   3   2   1
6   19  18  17  16
7   20  25  24  15
8   21  22  23  14
9   10  11  12  13
```

```c
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
```

