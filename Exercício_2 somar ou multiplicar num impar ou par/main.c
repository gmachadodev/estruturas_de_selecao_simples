#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Digite valor de A\n");
    scanf("%d", &A);

    printf("Digite valor de B\n");
    scanf("%d", &B);

    if (A == B)
    {
        C = A + B;
    }
    else
    {
        C = A * B;
    }

    printf("Resultado eh: %d \n", C);
    return 0;
}
