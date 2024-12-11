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


int main() {
    int n;
    int numExecucoes = 5;
    double tempoTotal = 0;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);


    int arr[n];

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Executa a ordenação 5 vezes
    for (int i = 0; i < numExecucoes; i++) {
        // Preenche o vetor com números aleatórios entre 0 e n-1
        for (int j = 0; j < n; j++) {
            arr[j] = rand() % n;
        }

        // Marca o início do tempo
        clock_t tempoInicio = clock();

        // Ordena o array
        insertionSort(arr, n);

        // Marca o fim do tempo
        clock_t tempoFim = clock();

        // Calcula o tempo de execução em segundos
        double tempoExecucao = ((double)(tempoFim - tempoInicio)) / CLOCKS_PER_SEC;
        tempoTotal += tempoExecucao;

        // Exibe o tempo de execução de cada iteração
        printf("Tempo de execução da %dª execução: %.6f segundos\n", i + 1, tempoExecucao);
    }

    // Calcula o tempo médio de execução
    double tempoMedio = tempoTotal / numExecucoes;
    printf("\nTempo médio de execução (5 execuções): %.6f segundos\n", tempoMedio);

    return 0;
}
