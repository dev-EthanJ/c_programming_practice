# 독하게 시작하는 C 프로그래밍
## Chapter 06. 기본 제어문
### 연습문제

1. if문을 사용하여 사용자로부터 정수 다섯 개를 입력받아 그중 가장 큰 수를 출력하는 프로그램을 작성하세요. 단, 사용자는 0~100 사이의 값만 입력하도록 강제합니다. 만일 범위를 벗어난 숫자를 입력할경우, 0 미만은 0으로, 100 초과는 100으로 조정합니다.

```c
#include <stdio.h>

int main(void)
{
    int nMax = -100, nInput = 0;

    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    
    printf("정수를 입력하세요. :");
    scanf("%d", &nInput);
    if (nInput < 0) nInput = 0;
    if (nInput > 100) nInput = 100;
    if (nInput > nMax) nMax = nInput;

    printf("MAX: %d\n", nMax);

    return 0;
}
```

2. 다음 코드에서 잘못된 부분은 무엇입니까.
```c
#include <stdio.h>

int main(void) 
{
    int nAge = 0;
    scanf("%d", &nAge);

    if(nAge = 20) puts("당신은 성인입니다.");
    puts("End");

    return 0;
}
```

- if문의 조건식에서 상등비교연산자 `==`대신에, 대입연산자 `=`를 사용했다. `nAge == 20`이 맞다.

3. 다음 코드를 작성하고 사용자가 `15`를 입력했다면 어떤 결과가 출력되는지 쓰세요.

```c
#include <stdio.h>

int main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);

    if (nInput > 10) {
        int nInput = 20;
        printf("%d\n", nInput);

        if (nInput < 20) {
            int nInput = 30;
            printf("%d\n", nInput);
        }
    }

    print("%d\n", nInput);

    return 0;
}
```

- 사용자가 `15`를 입력하면 가장 바깥 block scope의 `nInput` 변수에 15가 저장된다. 첫번째 `if`문의 조건을 충족하므로, 다음 블록스코프로 이동하여 실행된다. 이때 `printf()`함수에서 가장 가까운 블록스코프의 변수를 출력하므로, `if`문 안에 있는 `nInput = 20`에 의해 `20`이 출력된다.
- 두번째 `if`문의 조건은 `nInput < 20`인데, 이때 사용되는 `nInput`변수는 해당 조건문이 포함되어 있는 가장 가까운 block scope의 변수이다. 따라서 `nInput == 20`이므로, `if`조건문은 `(20 < 20)`가 된다. 즉 항상 거짓(false)이므로 해당 if문의 내용은 실행되지 않는다.
- 두개의 `if`문을 빠져나와서 마지막에 있는 `printf()`함수는 기존 지역변수가 스코프를 빠져나오면서 삭제되었으므로, 가장 바깥의 지역변수로 유지된다. 따라서 `nInput == 15`이다.
- 정리하자면, 사용자가 `15를 입력했을때의 출력은 다음과 같다.
```
20
15
```
