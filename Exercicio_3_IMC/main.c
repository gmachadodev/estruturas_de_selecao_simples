// #include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float P, A, IMC;

    printf("Digite o seu peso em kg: \n");
    scanf("%f", &P);

    printf("Digite a sua altura em m: \n");
    scanf("%f", &A);

    IMC = P / (pow(A,2));            //IMC = P / (A*A);

    printf("------------------------------ \n");

    printf("IMC = %.2f \n", IMC);

    if(IMC < 18.5)
    printf("Abaixo do peso \n------------------------------ \n");

        else if(IMC >= 18.5 && IMC < 25)
        printf("Peso normal \n------------------------------ \n");


        else if(IMC >= 25 && IMC <= 30)
        printf("Acima do peso \n------------------------------ \n");


    else
    printf("Obeso \n------------------------------ \n");

    return 0;
}
