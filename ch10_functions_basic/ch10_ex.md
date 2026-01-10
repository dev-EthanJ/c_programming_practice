# 독하게 시작하는 C 프로그래밍
## Chapter 10. 함수에 대한 기본 이론
### 연습문제

1. 매개변수로 int형 자료 4개를 받아 그중 가장 작은 숫자를 반환하는 `GetMin()` 함수를 작성하세요.

```c
#include <stdio.h>

int GetMin(int a, int b, int c, int d)
{
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;

    return min;
}
```

2. 다음 코드는 계승을 계산하는 `GetFactorial()` 함수의 예를 보인 것입니다. 설계 원칙상 이 코드의 문제점으로 지적할 수 있는 부분은 무엇이며, 그 문제점을 수정하려면 `GetFactorial()` 함수의 코드는 어떻게 수정되어야 하는지 기술하세요.

```c
#include <stdio.h>

int GetFactorial(int param)
{
    int result = 1, i = 0;
    if (param < 1 || param > 10) {
        puts("ERROR: 1 ~ 10 사이의 정수를 입력하세요.");
        
        return 0;
    }

    for (i = 1; i <= param; ++i) {
        result *= i;
    }

    return result;
}

int main(void)
{
    printf("MAX: %d\n", GetFactorial(1));
    printf("MAX: %d\n", GetFactorial(5));
    printf("MAX: %d\n", GetFactorial(11));
    printf("MAX: %d\n", GetFactorial(10));

    return 0;
}
```

- 콘솔 입출력을 `main()`함수에서 담당하고 있는데, `GetFactorial()`함수에서 입력값의 유효성을 판단하고 에러 메세지를 출력하고 있다.
- 메세지 출력을 `main()`함수에서 모두 담당하기 위해, `GetFactorial()`함수에서 입력값이 유효하지 않을 때 `-1`을 반환하고, `main()`함수에서 `GetFactorial()`함수의 반환값에 따라 출력을 진행할 지, 아니면 에러메세지를 출력할 지 판단할 수 있게 해야한다.

3. 기본요금과 나이를 매개변수로 받아서 나이에 따른 최종요금을 계산해 반환하는 `GetFare()`함수를 작성하세요. 단 나이별 할인율은 다음과 같습니다.
- 0 ~ 3: 100% (무료)
- 4 ~ 13: 50%
- 14 ~ 19: 75%
- 20 이상: 0%

```c
#include <stdio.h>

int GetFare(int fare, int age)
{
    if (age >= 20) return (int)(fare * 1.00);
    else if (age >= 14) return (int)(fare * 0.25);
    else if (age >= 4) return (int)(fare * 0.50);
    else return (int)(fare * 0.00);
}
```

4. 함수의 원형 선언이 필요한 이유를 설명하세요.
- 함수의 원형을 선언함으로서, 컴파일러에게 해당 함수가 존재함을 알리고, 매개변수의 자료형을 정해서 자료형이 일치하지 않을 때를 확인해 컴파일 에러가 발생할 수 있게 한다.

5. 다음 코드를 작성하고 실행하여 11을 입력한다면 어떤 결과가 출력되는지 쓰세요.
```c
// 전역변수와 스코프
#include <stdio.h>

int input = 100;

int TestFunc(void)
{
    printf("%d\n", input);
}

int main(void)
{
    int input = 0;
    scanf("%d", &input);

    if (input > 10) {
        int input = 20;
        printf("%d\n", input);

        TestFunc();

        if (input >= 100) {
            printf("%d\n", input);
        }
    }

    printf("%d\n", input);

    return 0;
}
```

```
20
100
11
```