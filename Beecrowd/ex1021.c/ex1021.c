#include <stdio.h>
#include <math.h>



int main(){

    double valor;
    int nota100,nota50,nota20,nota10,nota5,nota2;
    int moedas1,moedas50,moedas25,moedas10,moedas5,moedas01;
    scanf("%lf", &valor);

    nota100 = valor/100;

    double resto  = fmod(valor,100.0);

    nota50 = resto/50;
    resto = fmod(resto,50);
    nota20 = resto/20;
    resto = fmod(resto,20);
    nota10 = resto/10;
    resto = fmod(resto,10);
    nota5 = resto/5;
    resto = fmod(resto,5);
    nota2 = resto/2;
    resto = fmod(resto,2);

    resto = resto + 0.00001;

    moedas1 = resto / 1;
    resto = fmod(resto,1);
    moedas50 = resto/0.5;
    resto = fmod(resto,0.5);
    moedas25 = resto/0.25;
    resto = fmod(resto,0.25);
    moedas10 = resto/0.1;
    resto = fmod(resto,0.1);
    moedas5 = resto/0.05;
    resto = fmod(resto,0.05);
    moedas01 = resto/0.01;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",nota100);
    printf("%d nota(s) de R$ 50.00\n",nota50);
    printf("%d nota(s) de R$ 20.00\n",nota20);
    printf("%d nota(s) de R$ 10.00\n",nota10);
    printf("%d nota(s) de R$ 5.00\n",nota5);
    printf("%d nota(s) de R$ 2.00\n",nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",moedas1);
    printf("%d moeda(s) de R$ 0.50\n",moedas50);
    printf("%d moeda(s) de R$ 0.25\n",moedas25);
    printf("%d moeda(s) de R$ 0.10\n",moedas10);
    printf("%d moeda(s) de R$ 0.05\n",moedas5);
    printf("%d moeda(s) de R$ 0.01\n",moedas01);

    return 0;
}