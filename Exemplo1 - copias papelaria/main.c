/*Numa papelaria, até 100 folhas, a cópia custa R$ 0,25 e, acima de 100 folhas, custa R$ 0,20.
Dado o total de cópias, informe o total a ser pago

*/

//Declaracao de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Funçao principal
int main()
{
    //Declaracao de variaveis
    float copias;
    float custo_total;
    printf("Digite a quantidade de copias: ");    //Solicita que usuario forneca o numero de copias
    scanf("%f",&copias);                          //Lê teclado e salva em peso
    if (copias <= 100)
    {
        custo_total = copias * 0.25;
    }
    else
    {
        custo_total = copias * 0.20;
    }
    printf(" O custo total eh de R$ %.02f\n",custo_total);
    return 0;
}
