#include <stdio.h>


int main(){
    int cod_1, num_1, cod_2, num_2;
    double valor_1, valor_2, total_1, total_2, total_arrecadado;

    scanf("%d %d %lf", &cod_1, &num_1, &valor_1 );

    scanf("%d %d %lf", &cod_2, &num_2, &valor_2 );

    total_1 = num_1 * valor_1;

    total_2 = num_2 * valor_2;

    total_arrecadado = total_1  + total_2;

    printf("VALOR A PAGAR: R$ %.2lf", total_arrecadado);


    return 0;

}