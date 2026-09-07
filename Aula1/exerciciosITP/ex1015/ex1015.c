#include <stdio.h>
#include <math.h>

int main(){
    double eixo_x1, eixo_y1, eixo_x2, eixo_y2, diferenca1, diferenca2;
    double distancia;

    scanf("%lf %lf", &eixo_x1, &eixo_y1);

    scanf("%lf %lf", &eixo_x2, &eixo_y2);

    diferenca1 = (eixo_x2 - eixo_x1); 
    
    diferenca2 = (eixo_y2 - eixo_y1);


    distancia = sqrt(pow(diferenca1, 2) + pow(diferenca2, 2));

    printf("%.4lf\n", distancia);


    return 0;
}