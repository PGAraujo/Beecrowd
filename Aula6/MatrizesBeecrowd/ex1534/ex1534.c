#include <stdio.h>


void imprime_matriz(int N, int matriz[N][N]);

int main(){
    int N;


    while (scanf("%d", &N) != EOF){
        if(N >= 3 && N < 70){
            int matrizN[N][N];
            imprime_matriz(N, matrizN);
    }
}
    return 0;   
}



void imprime_matriz(int N, int matriz[N][N]){
    int diagonal_principal = 1;
    int diagonal_secundaria = 2;
    int auxiliar = 3;


    for(int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j++){
            if(i + j == N - 1){
                matriz[i][j] = diagonal_secundaria;
            }
            else if(i == j){
                matriz[i][j] = diagonal_principal;
            }
            else {
                matriz[i][j] = auxiliar;
            }
        }
    }

    for(int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}