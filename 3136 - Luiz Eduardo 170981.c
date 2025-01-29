/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct stack
{
    long long int head;
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
    pilha->head++;
    pilha->element[pilha->head] = data;
}

void pushRam(Stack *pilha, Stack *ram, int number)
{
    pilha->head++;
    pilha->element[pilha->head] = ram->element[number];
}

void pop(Stack *pilha, Stack *ram, int index)
{
    ram->head++;
    ram->element[index] = pilha->element[pilha->head];
    pilha->head--;
}

void add(Stack *pilha)
{
    long long int sum = pilha->element[pilha->head] + pilha->element[(pilha->head - 1)];
    pilha->head -= 1;
    pilha->element[pilha->head] = sum;
}

void mul(Stack *pilha)
{
    long long int mul = pilha->element[pilha->head] * pilha->element[(pilha->head - 1)];
    pilha->head--;
    pilha->element[pilha->head] = mul;
}

void divStack(Stack *pilha)
{
    long long int aux = pilha->element[(pilha->head - 1)] / pilha->element[pilha->head];
    pilha->head--;
    pilha->element[pilha->head] = aux;
}

void sub(Stack *pilha)
{
    long long int sum = pilha->element[(pilha->head - 1)] - pilha->element[(pilha->head)];
    pilha->head--;
    pilha->element[pilha->head] = sum;
}

void Print(Stack *pilha)
{
    printf("%lld\n", pilha->element[(pilha->head)]);
    pilha->head--;
}

int main()
{
    int quant, number;
    char commands[60], *token;
    Stack Ram, pilha;

    scanf("%d", &quant);
    while (quant--)
    {
        scanf("%s", commands);
        // Comandos

        if (commands[0]== 'p' && commands[1]== 'u' && commands[2]== 's' && commands[3]== 'h')
        {
            token = strtok(commands, "push_");
            if (token[0] == 'R')
            {
                // PUSH PELA MEMÓRIA RAM
                token = strtok(token, "R");
                number = atoi(token);
                pushRam(&pilha, &Ram, number);
            }
            else
            {
                // PUSH
                token = strtok(token, "_");
                number = atoi(token);
                push(&pilha, number);
            }
        }
        else if (commands[0]== 'p' && commands[1]== 'o' && commands[2]== 'p')
        {
            token = strtok(commands, "pop_R");
            number = atoi(token);
            pop(&pilha, &Ram, number);
        }
        else if (strcmp(commands, "add") == 0)
        {
            add(&pilha);
        }
        else if (strcmp(commands, "mul") == 0)
        {
            mul(&pilha);
        }
        else if (strcmp(commands, "div") == 0)
        {
            divStack(&pilha);
        }
        else if (strcmp(commands, "sub") == 0)
        {
            sub(&pilha);
        }
        else if (strcmp(commands, "print") == 0)
        {
            Print(&pilha);
        }
    }
    system("pause");
}