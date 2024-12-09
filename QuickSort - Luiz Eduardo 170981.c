/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função separar array
int separar(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivô
    int i = (low - 1);     // Índice do menor elemento

    for (int j = low; j < high; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++; // Incrementa o índice do menor elemento
            // Troca arr[i] e arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Troca arr[i+1] e arr[alto] (ou o pivô)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

// Função recursiva do Quick Sort
void quickSortR(int arr[], int low, int high) {
    if (low < high) {
        // Índice de separação
        int pi = separar(arr, low, high);

        // Ordena os elementos separadamente antes e depois da separação
        quickSortR(arr, low, pi - 1);
        quickSortR(arr, pi + 1, high);
    }
}

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

    // Ordena o array usando Quick Sort
    quickSortR(arr, 0, n - 1);

    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}
