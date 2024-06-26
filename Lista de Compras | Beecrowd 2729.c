//Luiz Eduardo garcia de Siqueira 170981 - AED1 2024.1 - Beecrowd Lista de Compras 2729
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declarando no da lista
typedef struct lista {
  char item[21];
  struct lista *prox;
} lista;

//funcao para inserir apenas itens que nao se repetem
void inserir_nome(lista *head, char item[]) {
  lista *aux = head->prox;
  while (aux != NULL) {
    if (strcmp(aux->item, item) == 0)
    return;
    aux = aux->prox;
  }
  lista *novo = (lista *)malloc(sizeof(lista));
  strcpy(novo->item, item);
  novo->prox = head->prox;
  head->prox = novo;
}

//funcao para ordenar a lista lexicograficamente
void ordenar_lista(lista *head) {
  if (head == NULL || head->prox == NULL)
  return;

  int trocado;
  lista *aux;
  lista *aux2 = NULL;

  do {
    trocado = 0;
    aux = head->prox;
    while (aux->prox != aux2) {
      if (strcmp(aux->item, aux->prox->item) > 0) {
        char temp[21];
        strcpy(temp, aux->item);
        strcpy(aux->item, aux->prox->item);
        strcpy(aux->prox->item, temp);
        trocado = 1;
      }
      aux = aux->prox;
    }
    aux2 = aux;
  } while (trocado);
}

//funcao para imprimir lista com \n para proxima iteracao
void imprimir_lista(lista *head) {
  lista *aux = head->prox;
  while (aux != NULL) {
    if (aux->prox != NULL)
    printf("%s ", aux->item);
    else
    printf("%s\n", aux->item);
    aux = aux->prox;
  }
}

//funcao para liberar lista
void liberar_lista(lista *head) {
  lista *lixo;
  while (head != NULL) {
    lixo = head;
    head = head->prox;
    free(lixo);
  }
}

int main() {
  //declarando variaveis necessarias e inicilizando a lista
  char frase[1000];
  lista *head = (lista *)malloc(sizeof(lista));
  head->prox = NULL;
  int n;

  //scan de n iteracoes e limpar caractere para scan da frase
  scanf("%d", &n);
  getchar();

  //loop para cada iteracao
  for (int j = 0; j < n; j++) {
    fgets(frase, sizeof(frase), stdin);
    //limpar caractere de nova linha caso tenha
    frase[strcspn(frase, "\n")] = '\0';
    char *token = strtok(frase, " ");
    //insercao de cada palavra na lista antes de ordenar
    while (token != NULL) {
      inserir_nome(head, token);
      token = strtok(NULL, " ");
    }
    //ordenar lista apenas trocando os nomes entre nos
    ordenar_lista(head);
    imprimir_lista(head);
    //liberar lista mas inicilizar novamente para proxima iteracao
    liberar_lista(head);
    head = (lista *)malloc(sizeof(lista));
    head->prox = NULL;
  }

  liberar_lista(head);
  return 0;
}
