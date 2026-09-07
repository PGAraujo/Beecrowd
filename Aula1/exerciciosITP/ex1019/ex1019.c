#include <stdio.h>

int main(){

    int total_segundos, tempo_segundos, tempo_minutos, tempo_horas;

    scanf("%d", &total_segundos);

    tempo_horas = total_segundos / 3600;

    tempo_minutos =  (total_segundos % 3600) / 60;

    tempo_segundos = (total_segundos % 60);

    printf("%d:%d:%d\n", tempo_horas, tempo_minutos , tempo_segundos);
    
    return 0;

}