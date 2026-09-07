#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    printf("%d\n", numero);

    printf("%d nota(s) de R$ 100,00\n", numero / 100);
    
    numero = numero % 100;

    printf("%d nota(s) de R$ 50,00\n", numero / 50);
    
    numero = numero % 50;

    printf("%d nota(s) de R$ 20,00\n", numero / 20);

    numero = numero % 20;

    printf("%d nota(s) de R$ 10,00\n", numero / 10);

    numero = numero % 10;

    printf("%d nota(s) de R$ 5,00\n", numero / 5);
    
    numero = numero % 5;

    printf("%d nota(s) de R$ 2,00\n", numero / 2);

    numero = numero % 2;

    printf("%d nota(s) de R$ 1,00\n", numero / 1);
    
    return 0;
}