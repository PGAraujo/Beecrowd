#include <stdio.h>
 
int main() {
 
    int x,contador_impar;


    contador_impar = 0;

    scanf("%d", &x);

    while (contador_impar < 6){
        if(x % 2 == 0){
            x += 1;
        }

        if(x % 2 == 1){
            printf ("%d\n",x);
            contador_impar += 1;
            x += 1;
        }
    }
    return 0;

}