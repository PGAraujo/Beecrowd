#include <stdio.h>
 
int main() {
 
    double vetor_A[100];
    double valor;

    for(int i = 0; i < 100 ; i++){
        scanf("%lf", &valor);
        vetor_A[i] = valor;
        if (valor <= 10){
            printf("A[%d] = %.1lf\n", i, vetor_A[i]);
        }
    }
 
    return 0;
}