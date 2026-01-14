# 📚 C 프로그래밍 학습 저장소

"독하게 시작하는 C 프로그래밍" 교재 기반의 체계적인 C 언어 학습 아카이브

## 🎯 목적

이 저장소는 C 프로그래밍 기초부터 고급 개념까지 학습하며 작성한 코드들을 모아놓은 공간입니다.

- **챕터별 예제 코드** - 핵심 개념 시연
- **연습문제 풀이** - 상세한 구현 포함

"독하게 시작하는 C 프로그래밍" 교재 기반으로 진행했으며, 2025년 12월 시작하여 2026년 1월까지 학습 종료했습니다.

---

## 📖 저장소 구조

```
c_programming/
├── ch01_introduction_to_c/          # C 프로그래밍 입문
├── ch02_datatypes/                  # 자료형
├── ch03_standard_io/                # 표준 입출력 도구
├── ch04_operators_basic/            # 연산자 - 기본
├── ch05_operators_advanced/         # 연산자 - 응용
├── ch06_basic_control_statements/   # 기본 제어문
├── ch07_loops/                      # 반복문
├── ch08_arrays/                     # 배열
├── ch09_array_programming_techniques/ # 배열 활용 프로그래밍 기법
├── ch10_functions_basic/            # 함수에 대한 기본 이론
├── ch11_memory_and_pointers/        # 메모리와 포인터
├── ch12_functions_advanced/         # 함수 응용
├── ch13_structures_and_unions/      # 구조체와 공용체
├── ch14_file_io/                    # 파일 입출력
├── ch15_variables_and_constants_advanced/ # 변수와 상수 고급 이론
├── ch16_preprocessor/               # 전처리기
├── ch17_functions_advanced_topics/  # 함수에 대한 고급 이론
└── README.md
```

<br>


## 📚 챕터별 학습 내용

### Chapter 01: C 프로그래밍 입문
**핵심 개념**: 함수 호출 메커니즘, 프로그램 구조

```c
// Caller와 Callee 관계 이해
int main(void) {
    printf("Hello, World!\n");  // main이 printf를 호출
    return 0;
}
```

**학습 포인트**:
- 호출자(Caller)와 피호출자(Callee) 함수 관계
- 매개변수 초기값(실인수, argument) 확정
- 함수의 정보 반환 의무

---

### Chapter 02: 자료형
**핵심 개념**: 메모리 해석 방법, 자료형의 크기

```c
char ch = 'A';           // 1바이트
int nData = 10;          // 4바이트
double dData = 123.456;  // 8바이트

// 변수의 3요소: 이름, 주소, 값
```

**학습 포인트**:
- 변수 = 메모리 공간의 해석 방법
- 부호 있는/없는 정수 (signed/unsigned)
- ASCII 코드를 통한 문자 표현

---

### Chapter 03: 표준 입출력 도구
**핵심 개념**: 버퍼 관리, 형식 지정자

```c
// 입력 버퍼 처리의 중요성
int nAge = 0;
scanf("%d%*c", &nAge);  // %*c로 개행문자 제거

// 형식 지정자 활용
printf("%08d\n", 1234);     // 00001234
printf("%.2f\n", 123.456);  // 123.46
```

**학습 포인트**:
- `getchar()` vs `_getch()` (버퍼 유무)
- `scanf()` 입력 버퍼 관리
- 형식 문자열을 통한 정밀한 출력 제어

---

### Chapter 04: 연산자 - 기본
**핵심 개념**: 연산자 우선순위, 형 변환

```c
// 타입 승격 (Type Promotion)
char ch = 'A';
printf("%c\n", ch + 1);  // char + int -> int

// 명시적 형변환
printf("%f\n", (double)5 / 2);  // 2.500000

// 비트 연산으로 마스킹
int data = 0x11223344;
printf("%08X\n", data & 0x00FFFF00);  // 00223300
```

**학습 포인트**:
- 임시 결과는 저장하지 않으면 사라짐
- 정수 나눗셈의 몫과 나머지
- 비트 연산자로 특정 비트 조작

---

### Chapter 05: 연산자 - 응용
**핵심 개념**: 논리 연산, 삼항 연산자

```c
// 단락 평가 (Short-circuit)
if (nAge >= 20 && nAge <= 30 && nHeight >= 150)

// 생존 검색 패턴 - 최댓값 찾기
int nMax = -100;
scanf("%d", &nInput);
nMax = nInput > nMax ? nInput : nMax;
```

**학습 포인트**:
- `&&`, `||`의 단락 평가 활용
- 삼항 연산자로 간결한 조건 처리
- 실수 비교의 부정확성 이해

---

### Chapter 06: 기본 제어문
**핵심 개념**: 조건 분기, 변수 스코프

```c
// 단계별 분류 패턴
if (nAge >= 65)      nRate = 100;
else if (nAge >= 20) nRate = 0;
else if (nAge >= 14) nRate = 25;
else if (nAge >= 4)  nRate = 50;
else                 nRate = 100;

// 블록 스코프와 식별자 검색
if (nInput > 10) {
    int nInput = 20;  // 새로운 지역 변수
    printf("%d\n", nInput);  // 20 출력
}
```

**학습 포인트**:
- `switch-case`의 fall-through 특성
- 블록 스코프에서 가장 가까운 변수 검색
- `goto`문 대신 반복문 사용 권장

---

### Chapter 07: 반복문
**핵심 개념**: 반복 제어, 중첩 루프

```c
// 구구단 출력 - 중첩 반복문
for (i = 2; i <= 9; ++i) {
    for (j = 1; j <= 9; ++j) {
        printf("%d * %d = %d\n", i, j, i * j);
    }
}

// break vs continue
for (i = 0; i < 10; ++i) {
    if (i > 4) break;     // 반복문 탈출
    if (i == 2) continue; // 다음 반복으로
}
```

**학습 포인트**:
- 반복문 내부 변수 선언 위치 주의
- `for`문의 초기화/조건/증감 구조
- `break`와 `continue`의 범위

---

### Chapter 08: 배열
**핵심 개념**: 연속된 메모리 공간, 인덱스 접근

```c
// 배열 이름은 주소상수
int aList[5] = {10, 20, 30, 40, 50};
// aList = aNewList;  // 에러! 대입 불가

// 배열 복사는 요소별로
for (i = 0; i < 5; ++i) {
    aNewList[i] = aList[i];
}

// 문자열은 '\0'로 끝나는 char 배열
char szData[8] = "Hello";  // {'H','e','l','l','o','\0'}
```

**학습 포인트**:
- 배열 이름 = 첫 번째 요소의 주소
- 문자열 끝의 NULL 문자 중요성
- 2차원 배열의 메모리 배치

---

### Chapter 09: 배열 활용 프로그래밍 기법
**핵심 개념**: 정렬 알고리즘, 패턴 채우기

```c
// 버블 정렬 구현
for (i = 0; i < 4; ++i) {
    for (j = i + 1; j < 5; ++j) {
        if (aList[i] > aList[j]) {
            nTmp = aList[j];
            aList[j] = aList[i];
            aList[i] = nTmp;
        }
    }
}

// 지그재그 배열 채우기
for (i = 0; i < 5; ++i) {
    if (i % 2 == 0) {
        for (j = 0; j < 5; ++j) list[i][j] = ++counter;
    } else {
        for (j = 0; j < 5; ++j) list[i][4-j] = ++counter;
    }
}
```

**학습 포인트**:
- 선택 정렬 vs 버블 정렬
- 플래그 변수로 방향 제어
- 보수를 이용한 역방향 인덱스

---

### Chapter 10: 함수에 대한 기본 이론
**핵심 개념**: 코드 모듈화, UI와 기능 분리

```c
// 기능과 UI 분리 설계
int GetFare(int age) {
    int fare = 1000;
    if (age < 20) fare /= 2;
    return fare;  // UI 코드 없음
}

int main(void) {
    int age = GetAge();
    printf("요금: %d원\n", GetFare(age));  // UI는 main에서
}

// 전역 변수 의존성 낮추기
void SortList(int *list, int size) {  // 매개변수로 전달
    // 특정 전역 변수에 의존하지 않음
}
```

**학습 포인트**:
- 함수 원형 선언의 필요성
- 전역 변수 남용 지양
- 재사용 가능한 함수 설계

---

### Chapter 11: 메모리와 포인터
**핵심 개념**: 동적 메모리, 포인터 연산

```c
// 동적 메모리 할당 및 해제
char *data = (char *)malloc(32);
strcpy(data, "Hello");
free(data);  // 반드시 해제!

// 포인터로 문자열 길이 계산
char *p = buffer;
while (*p != '\0') ++p;
int length = p - buffer;  // 주소 차이 = 길이

// 배열 표기법 ↔ 포인터 표기법
buffer[5]     == *(buffer + 5)
&buffer[4]    == buffer + 4
```

**학습 포인트**:
- `malloc`/`calloc`/`realloc`/`free`
- 포인터 연산으로 배열 순회
- 메모리 누수 방지 중요성

---

### Chapter 12: 함수 응용
**핵심 개념**: Call by Reference, 재귀 호출

```c
// Call by Reference로 값 교환
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 재귀 함수로 팩토리얼
int GetFactorial(int n) {
    if (n == 1) return 1;
    return n * GetFactorial(n - 1);
}

// 문자열 함수 체인
char *end = mystrcat(path, "C:\\");
end = mystrcat(end, "Program Files\\");
```

**학습 포인트**:
- 포인터로 원본 수정
- 재귀 호출의 종료 조건
- 문자열 끝 포인터 반환 패턴

---

### Chapter 13: 구조체와 공용체
**핵심 개념**: 사용자 정의 타입, 자기참조

```c
// typedef로 간결한 선언
typedef struct USERDATA {
    int age;
    char name[32];
    char phone[32];
} USERDATA;

// 자기참조 구조체 (연결 리스트)
typedef struct NODE {
    int data;
    struct NODE *next;  // 자기 자신을 가리킴
} NODE;

// 구조체 멤버 정렬 (패딩)
struct USERDATA {
    char ch;      // 1바이트
    // [패딩 3바이트]
    int age;      // 4바이트
};  // 총 8바이트
```

**학습 포인트**:
- 구조체로 관련 데이터 묶기
- 자기참조로 동적 자료구조 구현
- 메모리 정렬과 패딩 이해

---

### Chapter 14: 파일 입출력
**핵심 개념**: 스트림, 파일 모드

```c
// 텍스트 파일 입출력
FILE *file = fopen("test.txt", "w");
fprintf(file, "%s\n", "Hello");
fclose(file);

// 바이너리 파일 입출력
FILE *file = fopen("data.dat", "wb");
fwrite(&data, sizeof(DATA), 1, file);
fclose(file);

// 파일 크기 측정
fseek(file, 0, SEEK_END);
size_t size = ftell(file);
fseek(file, 0, SEEK_SET);
```

**학습 포인트**:
- 텍스트 모드 vs 바이너리 모드
- `fread`/`fwrite`로 구조체 저장
- 파일 포인터로 위치 제어

---

### Chapter 15: 변수와 상수 고급 이론
**핵심 개념**: const, extern, enum

```c
// const 포인터 두 가지
const int *ptr1;     // 가리키는 대상이 상수
int* const ptr2;     // 포인터 자체가 상수

// 외부 변수 선언
extern int g_counter;  // 다른 파일에 정의됨

// 열거형으로 가독성 향상
typedef enum COLOR {
    RED = 100,
    GREEN,
    BLUE
} COLOR;
```

**학습 포인트**:
- `const` 위치에 따른 의미 차이
- 심볼릭 상수 정의 방법
- `enum`으로 관련 상수 그룹화

---

### Chapter 16: 전처리기
**핵심 개념**: 매크로, 조건부 컴파일

```c
// 매크로 함수 - 괄호 필수!
#define ADD(a, b) ((a) + (b))

// 조건부 컴파일
#ifdef _DEBUG
    #define LOG(msg) printf("DEBUG: %s\n", msg)
#else
    #define LOG(msg)
#endif

// 문자열화 연산자
#define STRING(x) #x
STRING(hello)  // "hello"
```

**학습 포인트**:
- 매크로는 단순 텍스트 치환
- 연산자 우선순위 문제 방지
- 조건부 컴파일로 빌드 환경 분리

---

### Chapter 17: 함수에 대한 고급 이론
**핵심 개념**: 함수 포인터, 콜백, 호출 규약

```c
// 함수 포인터 선언
int (*funcPtr)(int, int) = GetMax;
printf("%d\n", funcPtr(1, 3, 2));

// 콜백 구조 - qsort 예제
int Compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
qsort(list, 5, sizeof(int), Compare);

// 호출 규약
int __cdecl    // C 기본 (Caller가 스택 정리)
int __stdcall  // Windows API (Callee가 정리)
int __fastcall // 레지스터 사용
```

**학습 포인트**:
- 함수도 주소를 가진 상수
- 역호출(callback) 패턴 이해
- 정적 라이브러리 생성 및 사용

---

## 🔧 개발 환경

- **운영체제**: Windows 11
- **컴파일러**: MinGW GCC
- **편집기**: Visual Studio Code
- **인코딩**: UTF-8
- **스타일 가이드**: Google C++ Style Guide (C 언어에 맞게 조정)

---

## 🚀 컴파일 및 실행

### 기본 컴파일

```bash
# 단일 소스 파일 컴파일
gcc example.c -o example.exe

# 실행 파일 실행
./example.exe
```

### 최적화 옵션 (Release 모드)

```bash
gcc -O2 example.c -o example.exe
```

### 디버그 정보 포함

```bash
gcc -g example.c -o example.exe
```

### 다중 파일 컴파일

```bash
# 여러 소스 파일을 컴파일하고 링크
gcc main.c utils.c -o program.exe

# 또는 별도로 컴파일 후 링크
gcc -c main.c -o main.o
gcc -c utils.c -o utils.o
gcc main.o utils.o -o program.exe
```

### 정적 라이브러리 사용

```bash
# 정적 라이브러리 생성
gcc -c mylib.c -o mylib.o
ar rcs libmylib.a mylib.o

# 라이브러리와 링크
gcc main.c -L. -lmylib -o program.exe
```

---

## 📚 학습 방법

1. **교재 내용 읽기**
2. **예제를 직접 타이핑** - 코드 작성에 익숙해지기
3. **코드 변형 실험** - 동작 이해를 위한 코드 수정
4. **연습문제 풀이** - 스스로의 힘으로 고민하며 풀이
5. **연습문제 채점 및 솔루션 확인** - 개선 지점 확인 및 재학습

---

## 🎓 습득한 핵심 개념

- **메모리 관리**: 동적 할당, 포인터, 메모리 누수
- **자료 구조**: 배열, 연결 리스트 (자기참조 구조체)
- **파일 작업**: 텍스트 및 바이너리 입출력, `fread`/`fwrite`
- **고급 주제**: 함수 포인터, 콜백 메커니즘, 호출 규약
- **빌드 도구**: 정적 라이브러리, 다중 파일 컴파일
- **디버깅**: 디스어셈블리 뷰 사용, 어셈블리 출력 이해

---

## 📝 참고 사항

- 모든 코드는 직접 작성하고 테스트됨
- 연습문제 채점 및 수정내용 채점에 ai agent(Claude)를 사용함
- 예제 타이핑이나 연습문제 풀이에는 도움을 받지 않음
- 코드 스타일은 C 프로그래밍에 맞게 조정된 Google C++ 가이드라인을 따름
- UTF-8을 사용하여 문자 인코딩 문제 해결

---

## 🔗 참고 자료

- **교재**: 독하게 시작하는 C 프로그래밍
- **스타일 가이드**: [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- **컴파일러 문서**: [GCC Manual](https://gcc.gnu.org/onlinedocs/)

---

## 👤 작성자

**장인성 (Insung Jang)**
- GitHub: [@dev-EthanJ](https://github.com/dev-EthanJ)
- 학습 기간: from 2025-12-30 to 2026-01-14
- 목표: 컴퓨터 과학 학습을 위한 탄탄한 프로그래밍 기초 구축

---

## 📄 라이선스

이 저장소는 개인 학습 목적의 교육 자료를 포함합니다.
코드 솔루션은 교재 연습문제를 기반으로 한 독창적인 작업입니다.
