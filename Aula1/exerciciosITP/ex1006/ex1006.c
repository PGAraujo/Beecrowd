#include <stdio.h>

int main (){
    double nota_A, nota_B, nota_C, media;

    scanf("%lf", &nota_A);

    scanf("%lf", &nota_B);

    scanf("%lf", &nota_C);

    media = ((nota_A * 2)  +  (nota_B * 3) + (nota_C * 5)) / 10 ; 

    printf("MEDIA = %.1lf\n", media);


    return 0;
}