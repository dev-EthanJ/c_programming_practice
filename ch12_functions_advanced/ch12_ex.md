# 독하게 시작하는 C 프로그래밍
## Chapter 12. 함수 응용
### 연습문제

1. 매개변수로 **검색 대상 문자열**이 저장된 메모리 주소와, 그 대상 문자에서 **찾고 싶은 문자열**이 저장된 메모리의 주소를 받아 검색에 성공하면 대상 메모리에서 찾고자 하는 문자열이 **저장된 위치의 인덱스**를 반환하는 함수를 작성하세요. 기능적으로는 `strstr()` 함수와 같지만, 반환하는 자료형은 `char*`가 아니라 대상 메모리에 대한 인덱스를 정수형으로 반환해야 합니다. 만일 찾는 문자열이 없다면 `-1`을 반환하는 함수로 정의합니다.

```c
#include <string.h>

int SearchString(char* src, char* find)
{
    int src_index = 0, find_index = 0, flag = 1, len = 0, i = 0;
    len = strlen(find);

    while(flag) {
        for (i = 0; i < len; ++i) {
            if (src[src_index + i] == find[find_index + i]) {
                // i < len까지 모두 일치해야 while 종료
                flag = 0;
            }
            else { // 값이 다르면
                // 다음 비교 시작위치 설정
                src_index = src_index + 1;
                //while 이어서 진행
                flag = 1;
                break;
            }
        }
        find_index = 0;
        // 끝까지 못찾으면
        if (src_index > strlen(src)) return -1;
    }
    
    return src_index;
}

```

2. 매개변수로 `char*`의 배열 이름과 요소의 개수를 인수로 받아, 오름차순으로 문자열을 정리하는 `SortString()`함수를 작성하세요. 

```c
#include <string.h>

void SortString(char* list[], int size)
{
    int i = 0, j = 0;
    char* temp = NULL;

    for (i = 0; i < size - 1; ++i) {
        for (j = i + 1; j < size; ++j) {
            if (strcmp(list[i], list[j]) > 0)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
```

3. `int`형 5행 4열 배열에서 각 요소의 총합을 계산하여 반환하는 `GetTotal()` 함수를 작성하세요.

```c

int GetTotal(int array[][])
{
    int result = 0, i = 0, j = 0;

    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 4; ++j) {
            result += array[i][j];
        }
    }

    return result;
}
```


4. 매개변수로 `char*` 두 개를 받아, 각 포인터가 가리키는 대상 문자열이 같은 문자열인지 비교하는 함수를 작성합니다. 만일 같으면 `0`을 반환하고, 그러지 않으면 `1`을 반환합니다. 단, 영문 대/소문자를 구별하지 않고 비교합니다. 따라서 'h'와 'H'를 같다고 인식해야 합니다.

```c
#include <string.h>
#include <ctype.h>

int StrCompare(char* src, char* dst) {
    int src_len = 0, dst_len = 0;

    if ((src_len = strlen(src)) != (dst_len = strlen(dst))) {
        return 1;
    }

    int i = 0;
    for (i = 0; i < src_len; ++i) {
        if (toupper(src[i]) != toupper(dst[i])) return 1;
    }

    return 0;
}
```

5. 난수를 구하는 함수를 사용하여 가위바위보 게임을 구현합니다. 0~2 범위의 숫자를 발생시켜서 각각 0은 가위, 1은 바위, 2는 보라고 가정합니다.
   게임 방식은 사용자로부터 0~2범위의 정수를 입력받은 후, 이에 대응하는 0~2범위의 난수를 발생시켜 사용자가 입력한 정보와 비교하는 방식으로 게임을 진행합니다.
   반드시 사용자, 컴퓨터가 선정한 것이 무엇이며, 누가 승자인지 표시해야 합니다.


```c

// 가위바위보 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetData(void)
{
    int input = 0;
    while(1) {
        printf("가위(0), 바위(1), 보(2) 중에 하나를 입력하세요: ");
        scanf("%d%*c", &input);

        if (input >= 0 && input <= 2) return input;
        else printf("ERROR: 범위에 맞는 숫자를 입력하세요. \n");
    }
}

void ShowResult(int user, int cpt)
{
    char* data[3] = {"가위", "바위", "보"};

    printf("사용자는 %s(%d)를 냈고, 컴퓨터는 %s(%d)를 냈습니다.\n", data[user], user, data[cpt], cpt);

    char* result[3] ={ "사용자와 컴퓨터가 비겼습니다.",
        "사용자가 컴퓨터를 이겼습니다.",
        "컴퓨터가 사용자를 이겼습니다." };

    switch (user) {
        case 0:
            switch (cpt) {
                case 0:
                    puts(result[0]);
                    break;
                case 1:
                    puts(result[2]);
                    break;
                case 2:
                    puts(result[1]);
                    break;
                default:
                    puts("ERROR");
            }
            break;
        case 1:
            switch (cpt) {
                case 0:
                    puts(result[1]);
                    break;
                case 1:
                    puts(result[0]);
                    break;
                case 2:
                    puts(result[2]);
                    break;
                default:
                    puts("ERROR");
            }
            break;
        case 2:
            switch (cpt) {
                case 0:
                    puts(result[2]);
                    break;
                case 1:
                    puts(result[1]);
                    break;
                case 2:
                    puts(result[0]);
                    break;
                default:
                    puts("ERROR");
            }
            break;
        default:
            puts("ERROR");
    }
    
}


int main(void)
{
    srand((unsigned)time(NULL));

    int user = GetData();
    int cpt = rand() % 3;

    ShowResult(user, cpt);

    return 0;
}

```

6. 오늘을 기준으로 10일 후와 100일 후의 날짜를 계산하여 출력하는 프로그램을 작성하세요.

```c

// 10일 후와 100일 후의 날짜를 계산하는 프로그램
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = 0;

    now = time(NULL);

    time_t ten_days = 60 * 60 * 24 * 10;
    time_t hundred_days = 60 * 60 * 24 * 100;

    ten_days += now;
    hundred_days += now;

    printf("%s\n", ctime(&ten_days));
    printf("%s\n", ctime(&hundred_days));

    return 0;
}

```