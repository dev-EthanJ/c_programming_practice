#include <stdio.h>

int main(void)
{
    int nInput = 0;
    char ch = 'A';

    printf("점수를 입력하세요: ");
    scanf("%d", &nInput);

    if (nInput >= 80) {
        if (nInput >= 90) ch = 'A';
        else ch = 'B';
    }
    else {
        if (nInput >= 70) ch = 'C';
        else {
            if (nInput >= 60) ch = 'D';
            else ch = 'F';
        }
    }

    printf("당신의 학점은 %c입니다.\n", ch);

    return 0;
}