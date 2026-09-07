#include <stdio.h>


int main(){
    int numero, horas_Trabalhadas;
    double salario_Hora, salario_Total;

    scanf("%d", &numero);

    scanf("%d", &horas_Trabalhadas);

    scanf("%lf", &salario_Hora);

    salario_Total = horas_Trabalhadas * salario_Hora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario_Total);


    return 0;

}