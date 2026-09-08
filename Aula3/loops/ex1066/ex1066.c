#include <stdio.h>
 
int main() {
 
    int numero, numero_par,numero_impar, numero_positivo, numero_negativo;



    numero_par = 0;
    numero_impar = 0;
    numero_positivo = 0;
    numero_negativo = 0;

    for ( int contador = 1; contador <= 5; contador++){
        scanf("%d", &numero);

        if(numero > 0){
            numero_positivo +=1;
            if(numero % 2 == 0){
                numero_par +=1;
            }
            else{
                numero_impar +=1;
            }
        } 
        
        else if ( numero == 0){
            numero_par +=1;
        } 
        
        else{
            numero_negativo +=1;
            if(numero % 2 == 0){
                numero_par +=1;
            }
            else{
                numero_impar +=1;
            }

        }
    }
 
    printf("%d valor(es) par(es)\n",numero_par);
    printf("%d valor(es) impar(es)\n", numero_impar);
    printf("%d valor(es) positivo(s)\n", numero_positivo);
    printf("%d valor(es) negativo(s)\n",numero_negativo);
    
    return 0;
}