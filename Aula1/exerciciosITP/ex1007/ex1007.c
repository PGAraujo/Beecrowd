#include <stdio.h>

int main(){
    

    int valor_A, valor_B, valor_C, valor_D, diferenca;

    scanf("%d", &valor_A);
    
    scanf("%d", &valor_B);
    
    scanf("%d", &valor_C);
    
    scanf("%d", &valor_D);

    diferenca = ((valor_A * valor_B) - (valor_C * valor_D));

    printf("DIFERENCA = %d",diferenca);

    return 0;
}