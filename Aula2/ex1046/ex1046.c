#include <stdio.h>
#include <stdlib.h>



int main(){
    int hora_inicial, hora_final, hora_auxiliar, hora_absoluto;


    scanf("%d %d", &hora_inicial, &hora_final);

    if (hora_inicial > hora_final){
        hora_auxiliar = hora_inicial - hora_final;
        hora_absoluto = abs(hora_auxiliar - 24);
        printf("O JOGO DUROU %d HORA(S)\n", hora_absoluto);
    }

    else if( hora_final > hora_inicial){
        hora_auxiliar = hora_final - hora_inicial;
        printf("O JOGO DUROU %d HORA(S)\n", hora_auxiliar);
    }

    else{
        print("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;

}