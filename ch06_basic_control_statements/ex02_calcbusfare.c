#include <stdio.h> 

int main(void)
{
    int nBusfare = 1000, nAge = 0;
    
    scanf("%d", &nAge);

    if (nAge < 20) {nBusfare = nBusfare * 75 / 100;}
        
    printf("%d원\n", nBusfare);

    return 0;
}