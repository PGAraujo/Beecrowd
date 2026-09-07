#include <stdio.h>


int main(){
    int tempo, vel_Media;
    double litro_Combustivel;
    const double automovel = 12;
    
    scanf("%d", &tempo);
    scanf("%d", &vel_Media);

    litro_Combustivel = (vel_Media * tempo) / automovel;

    printf("%.3lf\n", litro_Combustivel);

    return 0;
}   