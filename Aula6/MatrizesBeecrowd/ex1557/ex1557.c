#include <stdio.h>
#include <math.h>

void preenche_matriz(int N,int matriz[N][N]);
void imprime_matriz(int N,int matriz[N][N]);
int main(){

    int N;
    while (scanf("%d", &N) == 1 && N != 0){
        int matriz[N][N];
        preenche_matriz(N,matriz);
        imprime_matriz(N,matriz);

    }


    return 0;

}



void preenche_matriz(int N, int matriz[N][N]){
    matriz[0][0] = 1;
    for(int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < N ; j++){
            matriz[i][j] = (int)pow(2, i + j);
        }
    }
}

void imprime_matriz(int N, int matriz[N][N]){
    int maior_numero_matriz = matriz[N-1][N-1];
    int T = 0;
    int temp = maior_numero_matriz;

    while (temp > 0){
        temp = temp/10;
        T++;
    }
    
    for(int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < N ; j++){
            if(j == 0){
                printf("%*d", T, matriz[i][j]);
            }
            else{
                printf(" %*d", T, matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}