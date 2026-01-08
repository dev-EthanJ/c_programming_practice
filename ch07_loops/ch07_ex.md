# 독하게 시작하는 C 프로그래밍
## Chapter 07. 반복문
### 연습문제

1. 1~100까지의 숫자 중에서 4의 배수가 몇 개이며, 이들의 총합이 얼마인지 계산해서 출력하는 프로그램을 작성하세요.

```c
#include <stdio.h>

int main(void)
{
    int nNum = 0;
    printf("숫자 범위의 끝 숫자를 입력하세요. : ");
    scanf("%d", &nNum);

    int nTotal = 0, nCount = 0, i = 0;

    for (i = 1; i <= nNum; ++i) {
        if (i % 4 == 0) {
            nTotal += i;
            ++nCount;
        }
    }

    printf("4의 배수의 갯수는 %d개 이며, 총합은 %d입니다. \n", nCount, nTotal);

    return 0;
}
```

2. 다음과 같이 '*'를 출력하는 프로그램을 작성하세요.
```
            *                   
        *       *   
    *       *       *
*       *       *       *
```

```c
// 트리 모양 삼각형 별 출력 프로그램 작성
#include <stdio.h>

int main(void) {

    int i = 0, j = 0;
    int nHigh = 0;

    printf("트리의 높이를 입력하세요. : ");
    scanf("%d", &nHigh);

    int nFlag = 0;
    if (nHigh % 2 == 0) nFlag = 1;
    else nFlag = 0;

    for (i = 0; i < nHigh; ++i) {
        for (j = 0; j < 2*nHigh; ++j) {
            if (j >= nHigh - 1 - i && j <= nHigh - 1 + i) {
                if ((i + j) % 2 == nFlag) printf("*\t");
                else printf("\t");
            }
            else printf("\t");
        }
        putchar('\n');
    }

    return 0;
}
```

3. 다음 코드의 실행 결과를 쓰세요.
```c
#include <stdio.h>

int main(void)
{
    int i = 0;

    for (i = 0; i < 10; ++i) {
        if (i > 4) continue;

        printf("%dth\n", i);
    }

    printf("END: i == %d\n", i);

    return 0;
}
```

```
0th
1th
2th
3th
4th
END: i == 10
```
