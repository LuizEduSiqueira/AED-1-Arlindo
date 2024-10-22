//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaracao de struct
typedef struct chamada{
char nome[21];
struct chamada* prox;
}chamada;

//funcao para inserir aluno no final da lista
void inserir_aluno(chamada* head, char nome[21]){
  chamada* novo = (chamada*) malloc(sizeof(chamada));
  strcpy(novo->nome, nome);
  novo->prox = NULL;

  //se a lista estiver vazia, o novo aluno sera o primeiro da lista
  if (head->prox==NULL)
  head->prox = novo;
    
  else{
    chamada* aux = head->prox;
    while(aux->prox!=NULL)
    aux=aux->prox;
    aux->prox = novo;
  }
}

//funcao para ordenar a lista alfabeticamente, apenas trocando os valores e mantendo as posicoes dos nós
void ordenar_lista(chamada* head) {
  if (head == NULL || head->prox == NULL)
  return;
  
  int trocado;
  chamada *ptr1;
  chamada *lptr = NULL;
  
  do{
    trocado = 0;
    ptr1 = head->prox;
    while (ptr1->prox != lptr) {
      if (strcmp(ptr1->nome, ptr1->prox->nome) > 0) {
        char temp[21];
        strcpy(temp, ptr1->nome);
        strcpy(ptr1->nome, ptr1->prox->nome);
        strcpy(ptr1->prox->nome, temp);
        trocado = 1;
      }
      ptr1 = ptr1->prox;
    }
    lptr = ptr1;
  } while (trocado);
}

//funcao para mostrar o aluno sorteado
void mostrar_aluno_k(chamada* head,int k){
  chamada* aux = head;
  for(int i=0; i<k; i++)
  aux = aux->prox;
  printf("%s\n", aux->nome);
}

//funcao para free lista
void liberar_lista(chamada* head){
  chamada* lixo;
  while(head!=NULL){
    lixo = head;
    head = head->prox;
    free(lixo);
  }
}

int main(){

  //declaracao de variaveis
  int n,k;
  int loop;
  char nome[21];
  chamada* novo;
  
  //inicializacao de lista
  chamada* head = (chamada*)malloc(sizeof(chamada));
  head->prox = NULL;

  //scan do numero de alunos e do sorteado com prevencao de erro
  do{
    scanf("%d %d",&n,&k);
    if (n<1 || n>100 || k<1 || k>100 || k>n)
    loop = 0;
    else loop=1;
  }while (loop == 0);

  //scan dos nomes
  for(int i=0;i<n;i++){
    scanf("%s",nome);
    inserir_aluno(head, nome);
  }
  //ordenacao da lista, mostrar o aluno sorteado e free lista
  ordenar_lista(head);
  mostrar_aluno_k(head,k);
  liberar_lista(head);
}
