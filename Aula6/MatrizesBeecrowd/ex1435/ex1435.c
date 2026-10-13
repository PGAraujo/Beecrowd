#include <stdio.h>


void imprime_matriz(int N, int matriz[N][N]);
void atribui_matriz(int N, int matriz[N][N]);
int calcula_distancia(int cima, int esquerda , int direita , int base);
int main(){
    int N;
    while(scanf("%d", &N) == 1 && N != 0){
            int matriz[N][N];
            atribui_matriz(N, matriz);
            imprime_matriz(N, matriz);
        }

    return 0;
}


void atribui_matriz(int N, int matriz[N][N]){
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j++){
              int cima = i + 1;
              int esquerda = j + 1;
              int direita = N - j;
              int base = N - i;
              matriz[i][j] = calcula_distancia(cima,esquerda,direita,base);
        }
    }
}



void imprime_matriz(int N, int matriz[N][N]){

    for(int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j++){
            if(j == 0 ){
            printf("%3d", matriz[i][j]);
            }
            else{
                printf(" %3d", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}


int calcula_distancia(int cima, int esquerda, int direita, int base){
    int valor_minimo = cima;
    if(esquerda < valor_minimo) valor_minimo = esquerda;
    if(direita < valor_minimo) valor_minimo = direita;
    if(base < valor_minimo ) valor_minimo = base;
    return valor_minimo;
}