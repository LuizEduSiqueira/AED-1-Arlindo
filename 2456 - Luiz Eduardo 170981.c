/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool crescente(int *vetor, int tamanho)
{
    int i;
    bool ordem = true;
    for (i = 1; i < tamanho; i++)
    {
        if (vetor[i] < vetor[i - 1] && ordem == true)
        {
            ordem = false;
        }
    }
    if (ordem)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool decrescente(int *vetor, int tamanho)
{

    short i;
    bool ordem = true;

    for (i = 1; i < tamanho; i++)
    {
        if (vetor[i] > vetor[i - 1] && ordem == true)
        {
            ordem = false;
        }
    }

    if (ordem)
    {
        return true;
    }
    else
    {
        return false;
    }
}

main()
{
    int cartas[5], i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &cartas[i]);
    }
    // verificação
    if (crescente(cartas, 5)) // caso seja 1 = True
    {
        printf("C\n");
    }
    else if (decrescente(cartas, 5)) // caso seja 1 = True
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");
    }
    system("pause");
}