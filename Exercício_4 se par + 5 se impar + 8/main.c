#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, r;

    printf("digite um numero\n");
    scanf("%d", &x);

    r = x % 2;

    if(r == 0)
    {
        y = x + 5;
        printf("O numero eh par. Resultado da soma: %d \n", y);
    }

    else
    {
        y = x + 8;
        printf("O numero eh impar. Resultado da soma: %d \n", y);
    }

    return 0;
}
