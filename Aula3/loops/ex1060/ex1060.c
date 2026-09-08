#include <stdio.h>
 
int main() {
 
    int contador, soma_numero;
    double numero;
    scanf("%lf", &numero);


    if (numero == 0){
        return 0;
    }
    
    soma_numero = 0;

    if(numero > 0 ){
        soma_numero = 1;
    }
    
    for (contador = 1; contador < 6; contador++){
        scanf("%lf", &numero);
        if(numero > 0){
            soma_numero += 1;
        } else{
            continue;
        }
    }
   
    printf("%d valores positivos\n",soma_numero);
    
    return 0;
}