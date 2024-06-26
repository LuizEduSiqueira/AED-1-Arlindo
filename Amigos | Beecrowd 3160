//Luiz Eduardo garcia de Siqueira 170981 - AED1 2024.1 - Beecrowd Amigos 3160
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
  char nome[21];
  struct lista *prox;
} lista;

// Função para inserir um novo nó no final da lista
void inserir_no_final(lista *head, char nome[]) {
  lista *novo = (lista *)malloc(sizeof(lista));
  strcpy(novo->nome, nome);
  novo->prox = NULL;
  lista *aux = head;
  while (aux->prox != NULL) {
     aux = aux->prox;
  }
  aux->prox = novo;
}

// Função para encontrar um nó com o nome especificado
lista *achar_no(char nome[], lista *head) {
  lista *aux = head->prox;
  while (aux != NULL) {
    if (strcmp(aux->nome, nome) == 0) {
      return aux;
    }
     aux = aux->prox;
  }
  return NULL;
}

// Função para imprimir a lista de nomes
void imprimir_lista(lista *head) {
  lista *aux = head->prox;
  while (aux != NULL) {
    printf("%s", aux->nome);
    aux = aux->prox;
    if (aux != NULL) {
      printf(" ");
    }
  }
  printf("\n");
}

// Função para liberar a memória alocada pela lista
void liberar_lista(lista *head) {
  lista *aux = head->prox;
  while (aux != NULL) {
    lista *temp = aux;
    aux = aux->prox;
    free(temp);
  }
  head->prox = NULL; // Coloca o ponteiro de head para NULL
}

int main() {
  //Declarar variaveis e inicializar lista
  char lista_L[100], lista_N[100], amigo_S[21];

  lista *head = (lista *)malloc(sizeof(lista));
  head->prox = NULL;

  // Ler lista de amigos L de Luiggy L
  fgets(lista_L, sizeof(lista_L), stdin);
  lista_L[strcspn(lista_L, "\n")] = '\0'; // Remover newline

  // Separar e inserir na lista L
  char *token = strtok(lista_L, " ");
  while (token != NULL) {
    inserir_no_final(head, token);
    token = strtok(NULL, " ");
  }

  // Ler lista N
  fgets(lista_N, sizeof(lista_N), stdin);
  lista_N[strcspn(lista_N, "\n")] = '\0'; // Remover newline

  // Ler amigo S
  scanf("%s", amigo_S);

  // Verificar se deve indicar a lista N para um amigo S
  if (strcmp(amigo_S, "nao") == 0) {
    // Inserir lista N no final de L
    token = strtok(lista_N, " ");
    while (token != NULL) {
      inserir_no_final(head, token);
      token = strtok(NULL, " ");
    }
  } 
  else {
    // Encontrar amigo S na lista L
    lista *amigo = achar_no(amigo_S, head);
    if (amigo != NULL) {
      // Inserir lista N antes do amigo S
      token = strtok(lista_N, " ");
      while (token != NULL) {
        lista *novo = (lista *)malloc(sizeof(lista));
        if (novo == NULL) {
          fprintf(stderr, "Erro ao alocar memória.\n");
          liberar_lista(head);
          return EXIT_FAILURE;
        }
        strcpy(novo->nome, token);
        novo->prox = amigo->prox;
        amigo->prox = novo;
        token = strtok(NULL, " ");
      }
    }
    else {
      // Caso amigo S não seja encontrado, inserir no final de L
      token = strtok(lista_N, " ");
      while (token != NULL) {
        inserir_no_final(head, token);
        token = strtok(NULL, " ");
      }
    }
  }

  // Imprimir lista atualizada
  imprimir_lista(head);

  // Liberar memória
  liberar_lista(head);
  free(head);

  return 0;
}
