#include <stdio.h>
 


int main() {
 
    int T; 
    int vetor[1000];
    int armazena_sequencial = 0;
    
    scanf("%d", &T);

    if(T >= 2 && T <= 50){
        for(int j = 0; j < 1000; j++){
            printf("N[%d] = %d\n", j , armazena_sequencial);
            armazena_sequencial++;
            if(armazena_sequencial == T){
                armazena_sequencial = 0;
            }
        }
    }
}