#include <stdio.h>
 
int main() {
 


    int vetor_x[10];
    int valor;


    for(int i = 0 ; i < 10 ; i ++ ){
        scanf("%d", &valor);
        if(valor <= 0){
            vetor_x[i] = 1;
        }
        else{
            vetor_x[i] = valor;
        }

        printf("X[%d] = %d\n", i ,vetor_x[i]);


    }









    return 0;
}