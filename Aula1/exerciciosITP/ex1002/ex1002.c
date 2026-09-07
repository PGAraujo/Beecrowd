#include <stdio.h>

int main(){
    const double π = 3.14159;
    double area, raio;

    scanf("%lf", &raio);

    area = π * (raio * raio);
    
    printf("A=%.4lf\n", area);

    return 0;
}