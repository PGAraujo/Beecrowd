#include <stdio.h>

void preenche_matriz(int N, int matriz[N][N]);
void imprime_matriz(int N, int matriz[N][N]);

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        int matriz[N][N];
        
        preenche_matriz(N, matriz);
        imprime_matriz(N, matriz);
    }

    return 0;
}


void preenche_matriz(int N, int matriz[N][N]) {
    int inicio_interno = N / 3;
    int fim_interno = N - 1 - (N / 3);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;

            if (i == j) {
                matriz[i][j] = 2;
            }

            if (i + j == N - 1) {
                matriz[i][j] = 3;
            }
            if (i >= inicio_interno && i <= fim_interno && j >= inicio_interno && j <= fim_interno) {
                matriz[i][j] = 1;
            }
            if (i == centro && j == centro) {
                matriz[i][j] = 4;
            }
        }
    }
}

void imprime_matriz(int N, int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}