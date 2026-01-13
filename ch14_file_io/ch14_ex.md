# 독하게 시작하는 C 프로그래밍
## Chapter 14. 파일 입출력
### 연습문제

1. 표준입력장치`stdin`에서 문자열을 입력받은 후, 표준출력장치`stdout`로 출력하는 프로그램을 작성하세요.
단, 반드시 `fgets()`와 `fputs()` 함수를 사용하세요.

```c
// stdin로 fgets()로 입력받고, stdout으로 fputs()를 통해 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    char buffer[512] = { 0 };

    fgets(buffer, sizeof(buffer), stdin);
    fputs(buffer, stdout);

    return 0;
}
```

2. 현재 경로에서 `testfile.txt` 텍스트 파일을 연 후, 사용자가 입력한 문자열을 뒤에 이어서 추가한 후 다시 저장하는 프로그램을 작성하세요.

```c
// 문자열 추가 후 저장
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = NULL;
    char buffer[512] = { 0 };

    fgets(buffer, sizeof(buffer), stdin);

    file = fopen("testfile.txt", "a");
    if (file == NULL) return 1;

    fputs(buffer, file);

    fclose(file);
    system("type testfile.txt");

    return 0;
}
```

3. 현재 경로에서 `testfile.txt` 텍스트 파일을 연 후, 원본 파일에서 행 단위로 문자열을 읽어들여 대상 파일에 복사하는 프로그램을 작성하세요.
단, 대상 파일도 현재 경로에 생성하며, 파일명은 `dstfile.txt`로 합니다.

```c
// 대상 파일 한 행씩 읽어와서 복사 붙여넣기
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *src = NULL, *dst = NULL;
    char buffer[512] = { 0 };

    src = fopen("testfile.txt", "r");
    dst = fopen("dstfile.txt", "w");
    if (src == NULL || dst == NULL) return 1;

    while(fgets(buffer, sizeof(buffer), src) != NULL) {
        fputs(buffer, dst);
        memset(buffer, 0, sizeof(buffer));
    }

    fclose(src);
    fclose(dst);

    system("type dstfile.txt");

    return 0;
}
```

4. `main()` 함수의 인자로 두 바이너리 파일의 경로를 입력받아 바이너리 모드로 열고,
원본 파일의 내용을 읽어들여 대상 파일로 복사하는 프로그램을 작성하세요.
단, 복사의 진행 과정을 백분율로 화면에 출력하고, 한 번에 4KB 단위로 복사합니다.
그리고 대상 파일이 존재 유무에 상관없이 무조건 생성하며, 파일의 크기가 최대 100MB 이상인 경우는 고려하지 않습니다.

```c
// 바이너리 파일 복사
#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *src = NULL, *dst = NULL;
    char buffer[4096] = { 0 };

    src = fopen(argv[1], "rb");
    dst = fopen(argv[2], "wb");
    if (src == NULL || dst == NULL) return 1;

    // file 크기 계산
    fseek(src, 0, SEEK_END);
    size_t total_size = ftell(src);
    fseek(src, 0, SEEK_SET);

    size_t now_size = 0;
    size_t bytes_read = 0;
    while ((bytes_read = fread(buffer, 1, 4096, src)) > 0) {
        fwrite(buffer, 1, bytes_read, dst);

        now_size += bytes_read;
        printf("File Copy, %02.2lf%% done. \r",
            100.0 * now_size / total_size);
    }
    
    puts("File Copy, 100.00% done.");

    fclose(src);
    fclose(dst);

    return 0;
}
```
