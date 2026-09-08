#include <stdio.h>

int main() {
    int S, T, F, hora_chegada;
    

    scanf("%d %d %d", &S, &T, &F);

    hora_chegada = S + T + F;

    if (hora_chegada >= 24) {
        hora_chegada = hora_chegada - 24;
    } 

    else if (hora_chegada < 0) {
        hora_chegada = hora_chegada + 24;
    }

    printf("%d\n", hora_chegada);

    return 0;
}