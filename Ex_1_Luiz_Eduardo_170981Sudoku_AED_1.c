// Bibliotecas
#include <stdio.h>

// funcao para verificar matriz
int verificaMatriz(int sudoku[9][9]) {

  
  // declaracao de variaveis
  int i, j, k, l;
  int inicio_linha, inicio_coluna, sum_quadrado, cont;
  
  // verificar linhas e colunas
  for (i = 0; i < 9; i++) {
    int aux_linhas[10] = {0};
    int aux_colunas[10] = {0};
    for (j = 0; j < 9; j++) {
      
      if (aux_linhas[sudoku[i][j]] || aux_colunas[sudoku[j][i]])
        return 0;
      aux_linhas[sudoku[i][j]] = 1;
      aux_colunas[sudoku[j][i]] = 1;
      
    }
  }

  // verificar quadrados 3x3
  for (inicio_linha = 0; inicio_linha < 9; inicio_linha += 3) {
    for (inicio_coluna = 0; inicio_coluna < 9; inicio_coluna += 3) {
      int sum_quadrado[10] = {0};
      for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
          if (sum_quadrado[sudoku[inicio_linha + i][inicio_coluna + j]])
            return 0;
          sum_quadrado[sudoku[inicio_linha + i][inicio_coluna + j]] = 1;
        }
      }
    }
  }
  // retonar 1 se a matriz for valida
  return 1;
}

// Funcao main
int main() {
  // declaracao de variaveis
  int n, i, j, loop;

  // scan de n instancias
  scanf("%d", &n);

  // loop para cada instancia
  for (loop = 1; loop <= n; loop++) {
    printf("Instancia %d\n", loop);

    // scan de uma matriz
    int sudoku[9][9];
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        scanf("%d", &sudoku[i][j]);
      }
    }

    // verificacao de matriz
    if (verificaMatriz(sudoku) == 1) {
      printf("SIM\n");
    } else {
      printf("NAO\n");
    }
    printf("\n");
  }

  return 0;
}