// UI와 기능의 분리
#include <stdio.h>

int GetResult(void)
{
    int result = 0;
    printf("성적을 입력하세요.(1~100) : ");
    scanf("%d", &result);

    if (result < 0 || result > 100) return -1;

    return result;
}

char GetGrade(int score) 
{
    switch (score / 10) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }
}

int main(void)
{
    int result = 0;
    result = GetResult();
    if (result == -1) {
        printf("ERROR : 범위 내의 점수를 입력하세요.\n");

        return 0;
    }

    printf("당신의 학점은 '%c' (%d) 입니다.\n", GetGrade(result), result);

    return 0;
}