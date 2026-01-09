# 독하게 시작하는 C 프로그래밍
## Chapter 08. 배열
### 연습문제
1. 요소의 자료형이 int형이고 길이가 5인 배열을 선언한 후, 사용자가 입력한 다섯 개의 정수로 초기화합니다. 그리고 그중에서 가장 큰 수와 가장 작은 수를 출력하는 프로그램을 작성합니다.

```c
#include <stdio.h>

int main(void)
{
    int aList[5] = { 0 };
    int nMin, nMax, i = 0, nInput = 0;

    for (i = 0; i < 5; ++i) {
        scanf("%d", &aList[i]);

        if (i == 0) {
            nMin = aList[i];
            nMax = aList[i];
        }

        if (aList[i] < nMin) nMin = aList[i];
        if (aList[i] > nMax) nMax = aList[i];
    }

    printf("MIN: %d, MAX: %d\n", nMin, nMax);

    return 0;
}
```

2. 사용자로부터 문자열을 입력받은 후 문자열의 길이를 출력하는 프로그램을 작성합니다. 단, 입력되는 문자열이 한글이라고 가정하고 한글 문자의 개수를 출력해야 합니다. 사용자가 영문이나 숫자를 입력하는 문제는 고려할 필요가 없으며 무조건 한글만 입력한다고 가정합니다. 그리고 글자 사이의 공백이나 탭 같은 화이트 스페이스는 없는 것으로 합니다.

```c
// 한글 문자열의 길이 출력
#include <stdio.h>

int main(void) 
{
    char szBuffer[1024] = { 0 };
    int nKorByte = 0, i = 0;
    char ch = 'a';

    nKorByte = 0;
    // 한글 한 글자의 바이트 수 구하기
    char oneKor[] = {"가"};
    while ((ch = oneKor[nKorByte]) != '\0') {
        ++nKorByte;
    }

    // printf("한글 한 글자의 바이트수 = %d\n", nKorByte);
    printf("한글 문자열을 입력하세요: ");
    scanf("%s", szBuffer);

    i = 0;
    while ((ch = szBuffer[i]) != '\0') {
        ++i;
    }

    printf("한글 문자의 갯수: %d개\n", i / nKorByte);

    return 0;
}
```