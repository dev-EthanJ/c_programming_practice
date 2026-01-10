// UI만 존재하는 관리 프로그램
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int PrintMenu(void)
{
    int input = 0;

    system("cls");
    printf("[1]New\t\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
    scanf("%d", &input);

    return input;
}

int main(void)
{
    int menu = 0;

    // 메뉴 이벤트 루프, 사용자의 입력한 값에 따라 기능 반복 수행, 0 입력시 종료
    while ((menu = PrintMenu()) != 0) {
        switch (menu) {
            case 1:
                puts("새 항목을 추가합니다.");
                break;
            case 2:
                puts("기존 항목에서 검색합니다.");
                break;
            case 3:
                puts("전체 내용을 출력합니다.");
                break;
            case 4:
                puts("기존 항목을 삭제합니다.");
                break;
            default:
                puts("알 수 없는 입력입니다.");
        }

        _getch();
    }

    puts("프로그램을 종료합니다.");

    return 0;;
}