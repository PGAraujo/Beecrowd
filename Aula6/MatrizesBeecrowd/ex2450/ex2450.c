#include <stdio.h>

int eh_matriz_escada(int N, int M, int matriz[N][M]);

int main() {
    int N, M;

    if (scanf("%d %d", &N, &M) == 2) {
        int matriz[N][M];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        if (eh_matriz_escada(N, M, matriz)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}

int eh_matriz_escada(int N, int M, int matriz[N][M]) {
    int ultimo_pivo = -1;
    int encontrou_linha_nula = 0;

    for (int i = 0; i < N; i++) {
        int primeiro_nao_zero = -1;

        for (int j = 0; j < M; j++) {
            if (matriz[i][j] != 0) {
                primeiro_nao_zero = j;
                break; // 
            }
        }

        if (primeiro_nao_zero == -1) {
            encontrou_linha_nula = 1;
        } 
        else {
            if (encontrou_linha_nula) {
                return 0;
            }

            if (primeiro_nao_zero <= ultimo_pivo) {
                return 0;
            }

            ultimo_pivo = primeiro_nao_zero;
        }
    }
    return 1;
}