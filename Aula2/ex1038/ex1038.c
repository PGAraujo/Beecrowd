#include <stdio.h>

int main(){
    int codigo, quantidade;
    double total;

    scanf("%d %d", &codigo, &quantidade);


    if (codigo == 1) {
        total = quantidade * 4;
        printf( "Total: R$ %.2lf\n", total );
    }
    
    if ( codigo == 2){
        total = quantidade * 4.5;
        printf( "Total: R$ %.2lf\n", total );
    }
    if ( codigo == 3 ){
        total = quantidade * 5;
        printf( "Total: R$ %.2lf\n", total );
    }
    if (codigo == 4){
        total = quantidade * 2;
        printf( "Total: R$ %.2lf\n", total );
    }
    if (codigo == 5){
        total = quantidade * 1.5;
        printf( "Total: R$ %.2lf\n", total );
    }

    if(codigo < 1 || codigo > 5){
        return 0;
    }
    return 0;
}