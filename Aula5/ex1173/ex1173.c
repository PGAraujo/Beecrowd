#include <stdio.h>
 
int main() {

    int valor_lido;
    int vetor[10];
    scanf("%d", &valor_lido);

    if (valor_lido <= 50){
        vetor[0] = valor_lido;
        printf("N[0] = %d\n", valor_lido);
        for(int i = 1 ; i <= 9; i++){
            vetor[i] = valor_lido * 2;
            valor_lido = vetor[i];
            printf("N[%d] = %d\n",i,vetor[i]);
        }
    }
    
    return 0;
}