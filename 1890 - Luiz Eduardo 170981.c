/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    unsigned long long int quantidade, i, c, d, aux = 0;
    scanf("%llu", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        scanf("%llu", &c);
        scanf("%llu", &d);
        if (c == 0 && d == 0)
        {
            printf("0\n");
        }
        else
        {
            aux = ((pow(26, c)) * (pow(10, d)));
            printf("%llu\n", aux);
        }
    }
    system("pause");
}