#include <stdio.h>
 
int main() {
 
   double numero,media,soma_numero;

   int contador,valores_positivos;

    media = 0;
    valores_positivos = 0;
    soma_numero = 0;

   for (contador = 1; contador <= 6; contador++ ){
    scanf("%lf", &numero);
    if ( numero == 0){
        break;
     }
    if ( numero > 0 ){
        valores_positivos += 1;
        soma_numero = soma_numero + numero;
     }
   }

    media = soma_numero/valores_positivos;

    printf("%d valores positivos\n",valores_positivos);

    printf("%.1lf\n",media);

    return 0;
}