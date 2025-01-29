/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct stack
{
    int head;
    long long int element[99999];
} Stack;

Stack createstack()
{
    Stack pilha;
    pilha.head = -1;

    return pilha;
}

bool vazia(Stack *pilha)
{
    return (pilha->head == -1);
}

void push(Stack *pilha, long long int data)
{
    // Inserindo no Inicio
    pilha->head++;
    pilha->element[pilha->head] = data;
}

void pop(Stack *pilha)
{
    if (!vazia(pilha))
    {
        char data;
        data = pilha->element[pilha->head];
        pilha->head--;
    }
    else
    {
        printf("EMPTY\n");
    }
}

// ---

long long menor(Stack *pilha)
{
    int i = 0;

    if (vazia(pilha))
        return -1;

    long long menor = pilha->element[0];

    while (i <= pilha->head)
    {
        if (pilha->element[i] < menor)
            menor = pilha->element[i];
        i++;
    }
    return menor;
}

main()
{
    unsigned quant;
    char operation[20];
    long long number, aux;

    scanf("%u", &quant);
    Stack pilha = createstack();

    while (quant--)
    {

        scanf("%s", operation);

        if (strcmp(operation, "PUSH") == 0)
        {

            scanf("%lld", &number);
            push(&pilha, number);
        }
        else if (strcmp(operation, "POP") == 0)
            pop(&pilha);
        else
        {

            aux = menor(&pilha);
            if (aux == -1)
                printf("EMPTY\n");
            else
                printf("%lld\n", aux);
        }
    }
    system("pause");
}