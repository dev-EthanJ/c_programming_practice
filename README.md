# C 프로그래밍 연습 (C Programming Practice)

> 숭실대학교 복학 대비 C 프로그래밍 기초 학습 자료
>
> Based on "독하게 시작하는 C 프로그래밍"

## 프로젝트 소개

이 저장소는 C 프로그래밍 언어의 기초부터 함수까지 체계적으로 학습하기 위한 예제 코드 모음입니다. 각 챕터별로 기본 개념부터 응용 문제까지 포함되어 있으며, 실습 중심의 학습을 목표로 합니다.

## 폴더 구조

```
c_programming_practice/
├── ch01_introduction_to_c/         # C 언어 소개
├── ch02_datatypes/                 # 자료형
├── ch03_standard_io/               # 표준 입출력
├── ch04_operators_basic/           # 기본 연산자
├── ch05_operators_advanced/        # 고급 연산자
├── ch06_basic_control_statements/  # 기본 제어문
├── ch07_loops/                     # 반복문
├── ch08_arrays/                    # 배열
├── ch09_array_programming_techniques/ # 배열 프로그래밍 기법
└── ch10_functions_basic/           # 함수 기초
```

## 학습 내용

### Chapter 01: C 언어 소개
- Hello World 프로그램
- 기본 프로그램 구조
- 함수 호출 개념

### Chapter 02: 자료형
- 정수형 (int)
- 실수형 (double, float)
- 문자열 기초

### Chapter 03: 표준 입출력
- `getchar()`, `getch()`, `gets()`, `fgets()` 함수
- 이스케이프 시퀀스
- 자료형 오버플로우
- `printf()` 형식 지정자
- `scanf()` 함수와 입력 처리
- 입력 오류 처리

### Chapter 04: 기본 연산자
- 산술 연산자 (+, -, *, /, %)
- 형 승격 (Type Promotion)
- 0으로 나누기
- 대입 연산자 (=, +=, -=, etc.)
- 형변환 (Type Casting)
- 비트 연산자 (&, |, ^, ~, <<, >>)
- 기본 패턴: 누산기, 카운터, 교환

### Chapter 05: 고급 연산자
- `sizeof` 연산자
- 관계 연산자 (>, <, >=, <=, ==, !=)
- 논리 연산자 (&&, ||, !)
- 단락 평가 (Short-circuit Evaluation)
- 조건 연산자 (?:)
- 기본 패턴: 이진 최댓값, 분류 및 선택

### Chapter 06: 기본 제어문
- `if` 문
- `if-else` 문
- `switch-case` 문
- `goto` 문
- 기본 패턴: 분류 선택, 단계별 분류

### Chapter 07: 반복문
- `while` 문
- 무한 루프
- 중첩 반복문
- `for` 문
- `do-while` 문
- `break`와 `continue`
- 반복문 제어 패턴

### Chapter 08: 배열
- 1차원 배열
- 배열 선언과 초기화
- 배열 복사
- 문자열 배열
- 2차원 배열
- 배열 합계와 카운터
- 배열에서 최댓값/최솟값 찾기

### Chapter 09: 배열 프로그래밍 기법
- 배열 교차 저장
- 정렬 알고리즘 (버블 정렬, 선택 정렬)
- 달팽이 배열
- 배열 검색
- 고급 배열 조작 기법

### Chapter 10: 함수 기초
- 함수 정의와 호출
- 함수 설계
- 함수 프로토타입
- 전역 변수와 지역 변수
- 코드 모듈화
- 메뉴 출력 함수 활용

## 파일 명명 규칙

- `01_*.c`, `02_*.c`: 챕터별 순차적 예제
- `ex*.c`: 연습문제 및 실습 예제
- `basicpattern_*.c`: 자주 사용되는 프로그래밍 패턴
- `*.md`: 연습문제 해설 및 설명 문서

## 빌드 및 실행

### GCC 사용
```bash
gcc -o program_name source_file.c
./program_name
```

### Visual Studio Code 사용
1. `.vscode/tasks.json` 파일이 설정되어 있습니다
2. `F5` 또는 `Ctrl+Shift+B`로 빌드 및 실행

### Windows
```cmd
gcc source_file.c -o program_name.exe
program_name.exe
```

## 주요 학습 목표

1. C 언어의 기본 문법 이해
2. 표준 입출력 처리 능숙도 향상
3. 제어문과 반복문을 활용한 논리 구현
4. 배열을 활용한 데이터 처리
5. 함수를 통한 코드 모듈화
6. 알고리즘 기초 (정렬, 검색)

## 개발 환경

- **언어**: C (C99 이상)
- **컴파일러**: GCC
- **IDE**: Visual Studio Code
- **운영체제**: Windows / Linux / macOS

## 라이선스

학습 목적으로 자유롭게 사용 가능합니다.

## 참고 자료

- 교재: "독하게 시작하는 C 프로그래밍"
