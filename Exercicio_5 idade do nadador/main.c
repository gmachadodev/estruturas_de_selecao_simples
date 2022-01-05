#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nadador;

    printf("Digite a idade do nadador: \n");
    scanf("%d", &nadador);

    if (nadador <= 10)
        printf("Nadador classificado como infantil!");

        else if (nadador > 10 && nadador <= 17)
            printf("Nadador classificado como juvenil!");

    else
        printf("Nadador classificado como senior!");

    return 0;
}
