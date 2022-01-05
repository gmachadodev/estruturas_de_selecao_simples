#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite primeiro numero inteiro \n");
    scanf("%d", &a);

    printf("Digite segundo numero inteiro \n");
    scanf("%d", &b);

    printf("Digite terceiro numero inteiro \n");
    scanf("%d", &c);

    if (a > b && b > c)
        printf("A sequencia dos numeros em ordem crescente eh: \n %d, %d, %d", c, b, a);

        else if (a > c && c > b)
            printf("A sequencia dos numeros em ordem crescente eh: \n %d, %d, %d", b, c, a);

        else if (b > a && a > c)
            printf("A sequencia dos numeros em ordem crescente eh: \n %d, %d, %d", c, a, b);

        else if (b > c && c > a)
            printf("A sequencia dos numeros em ordem crescente eh: \n %d, %d, %d", a, c, b);

        else if (c > a && a >b)
            printf("A sequencia dos numeros em ordem crescente \n %d, %d, %d", b, a, c);

    else
        printf("A sequencia dos numeros em ordem crescente \n %d, %d, %d", a, b, c);

    return 0;
}
