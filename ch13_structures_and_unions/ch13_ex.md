# 독하게 시작하는 C 프로그래밍
## Chapter 13. 구조체와 공용체
### 연습문제

1. 다음 예제의 실행결과와 그 이유는 무엇입니까.

```c
#include <stdio.h>

typedef struct USERDATA
{
    char ch;
    int age;
} USERDATA;

typdeft struct MYDATA
{
    char ch;
    int age;
    double data;
} USERDATA;

int main(void)
{
    printf("%d\n", sizeof(USERDATA));
    printf("%d\n", sizeof(MYDATA));

    return 0;
}

```


```
8
16
```

- 구조체 멤버 맞춤(structure member align)에 의해서 가장 큰 멤버 메모리 사이즈의 배수 단위로 구조체 멤버가 할당되기 때문이다.

2. 자기 자신에 대한 포인터를 멤버로 갖는 구조체를 무엇이라 하는지 쓰세요.

- 자기참조 구조체(self-reference structure). 다른 구조체와 논리적 관계를 만들 수 있어서 자료구조 등에서 사용된다.