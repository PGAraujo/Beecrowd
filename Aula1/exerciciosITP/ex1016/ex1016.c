#include <stdio.h>

int main (){
    int distancia, conversao_vel_tempo, diferenca_vel;
    const int vw_gol = 60;
    const int bmw_i8 = 90;
    diferenca_vel = bmw_i8 - vw_gol;

    scanf("%d", &distancia);

    conversao_vel_tempo = (distancia * 60) / diferenca_vel;

    printf("%d minutos\n", conversao_vel_tempo);



    return 0;
}