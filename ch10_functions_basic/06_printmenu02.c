// 재사용 가능한 단위 기능의 함수 구현
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int GetFare(int age)
{
    int fare = 1000;
    if (age < 20) fare /= 2;

    return fare;
}

int PrintMenu(void)
{
    int input = 0;

    system("cls");
    printf("[1]New\t\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
    scanf("%d", &input);

    return input;
}

int GetAge(void)
{
    int age = 0;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (age < 0) return -1;
    return age;
}

int main(void)
{
    int menu = 0, age = 0;


    while ((menu = PrintMenu()) != 0) {
        if (menu == 1) {
            age = GetAge();
            if (age == -1) {
                printf("나이를 양수 범위로 입력하세요.\n");

                continue;
            }
            printf("요금은 %d원 입니다.\n", GetFare(age));

            _getch();
        }
        else {
            printf("아직 구현되지 않은 기능입니다.");

            _getch();
        }
    }

    return 0;
}