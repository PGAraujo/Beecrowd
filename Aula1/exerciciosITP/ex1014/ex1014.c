#include <stdio.h>

int main(){
    int distancia_total;
    double total_combustivel;


    scanf("%d", &distancia_total);
    scanf("%lf",&total_combustivel);

    printf("%.3lf km/l\n", distancia_total / total_combustivel);

    return 0;
}