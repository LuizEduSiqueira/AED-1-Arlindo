/*Luiz Eduardo Garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função Intercalar
void intercalar(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Mescla os arrays temporários de volta em array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], (se houver)
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], (se houver)
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função do MergeSort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Ordena as duas metades
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Mescla as duas metades ordenadas
        intercalar(arr, left, mid, right);
    }
}


int main() {
    int n;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int arr[n];
    srand(time(NULL));

    double totalTime = 0;

    for (int exec = 0; exec < 5; exec++) {
        // Preenche o vetor com números aleatórios entre 0 e n-1
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % n;
        }

        printf("Execução %d: Array gerado:\n", exec + 1);

        // Mede o tempo do Merge Sort
        clock_t start = clock();
        mergeSort(arr, 0, n - 1);
        clock_t end = clock();

        double timeTaken = (double)(end - start) / CLOCKS_PER_SEC;
        totalTime += timeTaken;

        printf("Array ordenado:\n");
        printf("Tempo da execução %d: %.5f segundos\n\n", exec + 1, timeTaken);
    }

    printf("Tempo médio de 5 execuções: %.5f segundos\n", totalTime / 5);

    return 0;
}
