#include <stdio.h>

int main(void)
{
    int x = 0, nInput = 0;
    scanf("%d", &nInput);

    // x gets nInput
    // nInput 변수의 값을 x에 복사(copy)하고, 기존 x값은 대입(overwrite)된 후 사라진다
    // assignment operator : copy + overwrite
    x = nInput;
    printf("%d\n", x);

    return 0;
}