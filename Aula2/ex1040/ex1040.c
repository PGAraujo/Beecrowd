#include <stdio.h>

int main(){

    double N1,N2,N3,N4,media,nota_exame,nova_media;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = ((2*N1) + (3*N2) + (4*N3) + N4) / 10;
    printf("Media: %.1lf\n", media);

    if (media >= 7.0 ){
        printf("Aluno Aprovado.\n");
    } else if(media < 5.0){
        printf("Aluno Reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%lf", &nota_exame);
        printf("Nota do exame: %.1lf\n", nota_exame);
        nova_media = (media + nota_exame) / 2 ; 
        if(nova_media >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media Final: %.1lf\n", nova_media);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media Final: %.1lf\n", nova_media);
        }
    }

    return 0;
}