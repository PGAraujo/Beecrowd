#include <stdio.h>

double soma_valores(int regiao, double matriz[12][12]);
double media_valores(int regiao, double matriz[12][12]);

int main() {
    int regiao;
    char operacao;
    double matriz[12][12];
    double resultado = 0;

    scanf("%d", &regiao);
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    if (operacao == 'S') {
        resultado = soma_valores(regiao, matriz);
    } else if (operacao == 'M') {
        resultado = media_valores(regiao, matriz);
    }

    printf("%.1lf\n", resultado);

    return 0;
}

double soma_valores(int regiao, double matriz[12][12]) {
    double soma = 0;
    for (int i = 0; i < 12; i++) {
        soma += matriz[i][regiao];
    }
    return soma;
}

double media_valores(int regiao, double matriz[12][12]) {
    double resultado_soma = soma_valores(regiao, matriz);
    return resultado_soma / 12.0;
}