/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    long int numero;
    int quant, i;

    scanf("%d", &quant);
    for (i = 0; i < quant; i++)
    {
        scanf("%ld", &numero);
        if (numero % 2 == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("9\n");
        }
    }
    system("pause");
}