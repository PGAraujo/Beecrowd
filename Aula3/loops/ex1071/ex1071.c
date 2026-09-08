#include <stdio.h>
 
int main() {
 
    int numero_A, numero_B,soma_impares;


    scanf("%d  %d", &numero_A, &numero_B);

    soma_impares = 0;

    if(numero_A > numero_B){
        for (int contador = numero_A; contador > numero_B ; contador -- ){
            if( contador < numero_A && contador > numero_B){
                if(contador % 2 != 0){
                soma_impares = soma_impares + contador;
                } else{
                    continue;
                }
            }
        }
    }

    if(numero_A < numero_B){
        for (int c = numero_A; c < numero_B; c++){
            if( c > numero_A && c < numero_B){
                if(c % 2 != 0 ){
                soma_impares = soma_impares + c;
                } else{
                    continue;
                }
            }
        }
    }
    

    printf("%d\n",soma_impares);
    return 0;
}