# 독하게 시작하는 C 프로그래밍
## Chapter 11. 메모리와 포인터
### 연습문제

1. `int`형 변수 `data`가 선언되었다고 가정한다면, 소스코드에 기술된 `data`와 `&data`의 차이점이 무엇인지 기술하시오.
- `data`변수는 4바이트 길이의 부호가 있는 정수형으로 해석하는 변수이고, `&data`는 `data`변수의 메모리 주소를 말한다.

2. 매개변수로 `char *`형 자료를 받아서, 문자열의 길이를 계산해 반환하는 함수를 작성하세요. 함수의 이름은 `GetLength()`로 합니다.

```c
int GetLength(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        ++i;
    }

    return i;
}
```

3. 다음 코드의 논리적 오류 두 가지는 무엇이고 어떻게 수정해야 하는지 기술하세요.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buffer[12] = { "HelloWorld" };
    char *data = NULL;

    data = (char *)malloc(sizeof(char) * 12);
    data = buffer;
    puts(data);

    return 0;
}
```

a. 문자열 복사할 때 단순 대입연산자를 사용했다. `data = buffer;` 행을 `strcpy(data, buffer);`로 수정해야 한다

b. 할당한 메모리를 수동해제하지 않았다. a를 수정한 후, `puts(data);` 다음에 `free(data);` 행을 추가한다.

4. `strrev()`함수와 동일한 기능을 수행할 수 있는 `MyStrrev()` 함수를 작성하세요.

```c
char* MyStrrev(char* origin)
{
    int len = strlen(origin) + 1;
    char *new = (char *)malloc(sizeof(char) * len);

    int i = 0;
    for (i = 0; i < len - 1; ++i) {
        new[i] = origin[len - 2 - i];
    }
    new[len - 1] = '\0';

    strcpy(origin, new);
    free(new);

    return origin;
}
```

5. 사용자로부터 입력받은 첫 번째 문자열을 동적 할당된 메모리에 저장한 후 화면에 출력하고, 두 번째로 입력받은 무자열을 첫 번째로 동적 할당된 메모리에 덧붙여 출력하는 프로그램을 작성합니다. 이때, 메모리가 부족해서 문제가 발생하지 않도록 메모리의 크기를 조정합니다. 기존에 할당받은 메모리의 크기를 늘려도 좋고 다시 할당받아도 좋습니다. 혹은 두 경우를 모두 구현하는 것도 좋습니다.

```
HelloWorld //입력
HelloWorld
TestString //입력
TestString
HelloWorldTestString
```

```c
// 입력된 문자열을 동적할당 후 출력하고 입력된 모든 문자열을 붙여서 출력
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char input[256] = { 0 };
    int first_len = 0, second_len = 0;

    char *first_alloc = NULL;
    char *second_alloc = NULL;

    scanf("%s%*c", input);
    first_len = strlen(input);
    first_alloc = (char *)malloc(sizeof(char) * (first_len + 1));
    sprintf(first_alloc, "%s", input);
    printf("%s\n", first_alloc);

    scanf("%s%*c", input);
    second_len = strlen(input);
    second_alloc = (char *)malloc(sizeof(char) * (second_len + 1));
    sprintf(second_alloc, "%s", input);
    printf("%s\n", second_alloc);

    char *final_alloc = (char *)malloc(sizeof(char) * (first_len + second_len + 1));
    if (final_alloc == NULL) {
        free(first_alloc);
        free(second_alloc);
        return 0;
    }

    sprintf(final_alloc, "%s%s", first_alloc, second_alloc);
    printf("%s\n", final_alloc);

    free(final_alloc);
    free(first_alloc);
    free(second_alloc);

    return 0;
}
```

6. 정수를 입력받고, 그 개수만큼 `char *`를 여러 개 저장할 수 있는 메모리를 동적할당 합니다. 그리고 입력할 문자열의 최대길이를 입력받고, 최대길이의 문자열을 저장할 수 있는 크기의 메모리를 동적할당하여 입력받은 문자열을 저장한 후 출력하는 프로그램을 작성합니다.

```c
// 입력받은 정수만큼 char* 배열 동적할당, 입력받은 정수만큼 char 길이 동적할당
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char* argv[])
{
    int input = 0, size = 0;
    
    scanf("%d", &input);
    char* *str_list = (char **)malloc(sizeof(char *) * input);

    scanf("%d", &size);
    int i = 0;
    for (i = 0; i < input; ++i) {
        str_list[i] = (char *)malloc(sizeof(char) * size);
    }

    for (i = 0; i < input; ++i) {
        scanf("%s%*c", str_list[i]);
    }

    for (i = 0; i < input; ++i) {
        puts(str_list[i]);
    }

    for (i = 0; i < input; ++i) {
        free(str_list[i]);
    }
    free(str_list);

    return 0;
}
```


