#include <stdio.h>
 
static int i;
int main() {
 
    int vetor_N[20];
    int valor;
    int vetor_auxiliar[20];
    int auxiliar = 0;

    for( i = 0 ; i < 20 ; i++){
        scanf("%d", &valor);
        vetor_auxiliar[i] = valor;
    }

    for (int j = 19; j >= 0 ; j-- ){
        vetor_N[i] = vetor_auxiliar[j];
        printf("N[%d] = %d\n", auxiliar , vetor_N[i]);
        auxiliar++;
    }
    return 0;
}