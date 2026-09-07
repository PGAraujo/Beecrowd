#include <stdio.h>


int main(){
    double nota_A, nota_B, media;

    scanf("%lf", &nota_A);
    
    scanf("%lf", &nota_B);

    media = ((nota_A * 3.5) + (nota_B * 7.5) ) / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;

}