// 매크로는 단순 치환!
#include <stdio.h>

// 결과값을 괄호 ()로 묶는게 권장된다
#define ADD(a, b) a + b
#define ERROR_MSG(msg) printf("ERROR: %s", msg)

int main(void)
{
    printf("%d\n", ADD(3, 4));
    // (ADD(3, 4) * 2) == (3 + 4 * 2)
    printf("%d\n", ADD(3, 4) * 2);
    ERROR_MSG("This is error.");

    return 0;
}