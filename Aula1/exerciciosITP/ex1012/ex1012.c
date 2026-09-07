#include <stdio.h>


int main(){
    const double pi = 3.14159;
    double valor_A, valor_B, valor_C;
    double area_tri, area_qua, area_ret, area_trap, area_circ;

    scanf("%lf %lf %lf", &valor_A, &valor_B, &valor_C );

    area_tri = (valor_A * valor_C) /2 ;
    
    area_circ = pi * (valor_C * valor_C);

    area_trap = ((valor_A + valor_B ) * valor_C)/2;

    area_qua = valor_B * valor_B;

    area_ret = valor_A * valor_B;


    printf("TRIANGULO: %.3lf\n", area_tri);
    
    printf("CIRCULO: %.3lf\n", area_circ);

    printf("TRAPEZIO: %.3lf\n", area_trap);
    
    printf("QUADRADO: %.3lf\n", area_qua); 
    
    printf("RETANGULO: %.3lf\n", area_ret);

    return 0;
}