/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ordenação de um array com Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}

// Print Array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int arr[n];

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números aleatórios entre 0 e n-1
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    printf("Array gerado:\n");
    printArray(arr, n);

    // Ordena o array
    insertionSort(arr, n);

    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}
