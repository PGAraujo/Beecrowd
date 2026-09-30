#include <stdio.h>
 
int main() {
    
    double valor;
    double vetor[100];


    scanf("%lf", &valor);

    vetor[0]  = valor;
    printf("N[%d] = %.4lf\n", 0, valor);
    for (int i = 1; i < 100; i++){
        vetor[i] = vetor[i-1]/2;
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }


    return 0;
}