#include <stdio.h>
 
int main() {
 
    int x,valor_impar;


    scanf("%d", &x);

    for (int contador = 1 ; contador <= x ; contador++){

        if(contador < 1 || contador > 1000){
            break;
        }

        if(contador % 2 == 1){
            printf("%d\n", contador);
        }
        else{
            continue;
        }
    }
 
    return 0;
}