/* Luiz Eduardo Garcia de Siqueira 170981 turma NA
   AED 1 Prof. Arlindo - 2024.2 */

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


int main() {
    int n;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);


    int arr[n];
    double total_time = 0.0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    for (int exec = 0; exec < 5; exec++) {
        // Preenche o vetor com números aleatórios entre 0 e n-1
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % n;
        }

        

        // Mede o tempo de execução do Quick Sort
        clock_t start = clock();
        quickSortR(arr, 0, n - 1);
        clock_t end = clock();

        // Calcula o tempo de execução
        double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        total_time += time_taken;

        printf("Execução %d - Array ordenado:\n", exec + 1);
        printf("Tempo de execução: %.6f segundos\n\n", time_taken);
    }

    // Calcula e exibe o tempo médio
    double average_time = total_time / 5.0;
    printf("Tempo médio de execução em 5 execuções: %.6f segundos\n", average_time);

    return 0;
}
