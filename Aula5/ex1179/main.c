#include <stdio.h>
 


void filtrar_par(int valor2);
void filtrar_impar(int valor2);
void imprime_restante_par();
void imprime_restante_impar();

static int vetor_par[5];
static int contador_par = 0;
static int vetor_impar[5];
static int contador_impar = 0;

int main(){
    int valor;

    for(int i = 0; i < 15 ; i++){
        scanf("%d", &valor);

        if(valor % 2 == 0){
            filtrar_par(valor);
        }
        else{
            filtrar_impar(valor);
        }
    }  
    
    imprime_restante_impar();
    imprime_restante_par();

    return 0;
}

void filtrar_par(int valor2){
    vetor_par[contador_par] =  valor2;
    contador_par++;

    if(contador_par == 5){
        for(int i = 0; i < 5 ; i++){
            printf("par[%d] = %d\n", i, vetor_par[i]);
        }
        contador_par = 0;
    }
}

void imprime_restante_par(){
    for(int i = 0; i < contador_par; i++){
        printf("par[%d] = %d\n", i, vetor_par[i]);
    }
    contador_par = 0;
}

void filtrar_impar(int valor2){
    vetor_impar[contador_impar] = valor2;
    contador_impar++;
    if(contador_impar == 5){
        for (int i = 0; i < 5; i++) {
            printf("impar[%d] = %d\n", i, vetor_impar[i]);
        }
        contador_impar = 0;
    }
}

void imprime_restante_impar(){
    for (int i = 0; i < contador_impar; i++) {
            printf("impar[%d] = %d\n", i, vetor_impar[i]);
        }
    contador_impar = 0;
}