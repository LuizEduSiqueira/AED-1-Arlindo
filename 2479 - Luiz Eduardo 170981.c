/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[21];
} Kidlist;

void sortinsert_name(Kidlist *vet, int size)
{
    Kidlist aux;
    int i = 1, j;
    while (i < size)
    {

        j = i - 1;
        aux = vet[i];

        while (j >= 0 && strcmp(vet[j].name, aux.name) > 0)
        {

            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = aux;
        i++;
    }
}

main()
{
    int size, aux, counterGood = 0, CounterPoor = 0, i = 0, j;
    char behavior;

    scanf("%d", &size);
    aux = size;

    Kidlist list[size];

    while (size--)
    {
        scanf(" %c %s", &behavior, list[i].name);
        i++;
        if (behavior == '+')
        {
            counterGood++;
        }
        else
        {
            CounterPoor++;
        }
    }
    sortinsert_name(list, aux);

    for (i = 0; i < aux; i++)
    {
        printf("%s\n", list[i].name);
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n", counterGood, CounterPoor);
    system("pause");
}