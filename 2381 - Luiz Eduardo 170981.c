/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

typedef struct dataNode
{
    char name[30];
} DataNode;

typedef struct node
{
    DataNode data;
    struct node *next;
} Node;

typedef struct list
{
    int size;
    Node *head;
} List;

//---- HEADER

List *createList();

void push_front(List *list, DataNode data); // Copia informações para o Topo da lista

void push_back(List *list, DataNode data);

bool isEmpty(List *list); // Verifica se a lista esta vazia

Node *atPos(List *list, int index); // Vai até a posição do Index

//---- FUCTIONS

List *createList()
{
    List *list = (List *)malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;

    return list;
}

void push_front(List *list, DataNode data)
{
    // Inserindo no Inicio
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

void printList(List *list, int pos)
{
    Node *pointer = atPos(list, pos);

    printf("%s\n", pointer->data.name);
}

bool isEmpty(List *list)
{
    return (list->size == 0); /* Sai o resultado da comparação */
}

Node *atPos(List *list, int index)
{
    if (index >= 0 && index < list->size)
    {
        Node *node = list->head;
        int i;
        for (i = 0; i < index; i++)
        {
            node = node->next; /* para andar para o prox. */
        }
        return node;
    }
    return NULL; /* Caso indíce inválido */
}

void insertionSort(List *list)
{
    Node *pointer = list->head;
    Node *i;
    Node *j;
    for (i = list->head; i->next != NULL; i = i->next)
    {
        Node *menor = i;
        for (j = i->next; j != NULL; j = j->next)
        {
            if (strcmp(j->data.name, menor->data.name) < 0)
            {
                menor = j;
            }
        }
        DataNode aux = i->data;
        i->data = menor->data;
        menor->data = aux;
    }
}

main()
{
    List *lista = createList();
    DataNode data;

    int size, winstudent, i;

    scanf("%d %d", &size, &winstudent);

    for (i = 0; i < size; i++)
    {
        scanf("%s", data.name);
        push_front(lista, data);
    }

    insertionSort(lista);
    printList(lista, (winstudent - 1));

    system("pause");
}