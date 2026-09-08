#include <stdio.h>

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    
    scanf("%d %d %d %d", &hora_inicio, &minuto_inicio, &hora_fim, &minuto_fim);

    int inicio_em_minutos = hora_inicio * 60 + minuto_inicio;
    int fim_em_minutos = hora_fim * 60 + minuto_fim;

    int duracao_minutos = fim_em_minutos - inicio_em_minutos;

    if (duracao_minutos <= 0) {
        duracao_minutos += 24 * 60; 
    }
    int horas_final = duracao_minutos / 60;
    int minutos_final = duracao_minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_final, minutos_final);

    return 0;
}