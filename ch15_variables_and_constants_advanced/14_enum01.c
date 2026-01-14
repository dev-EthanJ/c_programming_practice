// 열거형 상수 enum > 가독성 상승 > switch-case문 활용 가능
// 여러개의 심볼릭 상수를 한꺼번에 정의하고 새로운 자료형으로서 활용
#include <stdio.h>

// data == index, MOVE == 0, JUMP == 1, ATTACK == 2
enum ACTION { MOVE, JUMP, ATTACK };

// 형 재선언 typedef를 포함하는 열거형 상수 enum 선언 및 정의
typedef enum COLOR { RED = 100, GREEN, BLUE } COLOR;

// switch-case문 활용
void PrintColor(COLOR color)
{
    switch (color) {
        case RED:
            printf("This is red.\n");
            break;
        case GREEN:
            printf("This is green.\n");
            break;
        case BLUE:
            printf("This is blue.\n");
            break;
        default:
            printf("I don't know what color it is.");
    }
}

int main(void)
{
    enum ACTION act = MOVE;
    COLOR color = GREEN;

    printf("act: %d, color: %d\n", act, color);

    PrintColor(color);

    return 0;
}

