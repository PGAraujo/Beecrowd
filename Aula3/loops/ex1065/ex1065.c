#include <stdio.h>
 
int main() {
 
    int numero,numero_par;

    numero_par = 0;
    
    for( int contador = 1; contador <= 5; contador++){
        scanf("%d", &numero);
        if(numero % 2 == 0){
            numero_par += 1;
        }
        else{
            continue;
        }


    }

    printf("%d valores pares\n", numero_par);


    return 0;
}