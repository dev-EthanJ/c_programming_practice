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


    if (user == cpt) {
        puts(result[0]);
    } else if ((user == 0 && cpt == 2) ||
               (user == 1 && cpt == 0) ||
               (user == 2 && cpt == 1)) {
        puts(result[1]);
    } else {
        puts(result[2]);
    }

    /*  
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
    */

    
}


int main(void)
{
    srand((unsigned)time(NULL));

    int user = GetData();
    int cpt = rand() % 3;

    ShowResult(user, cpt);

    return 0;
}