#include <stdio.h>
 
unsigned long long fibonnaci(int n);
  
int main() {
    int quantidade_valores;
    int  valor_fib;
    unsigned long long armazena;

    scanf("%d", &quantidade_valores);

    for(int i = 1; i <=quantidade_valores; i++ ){
        scanf("%d", &valor_fib);
        if(valor_fib >= 0 && valor_fib <= 60){
            armazena = fibonnaci(valor_fib);
            printf("Fib(%d) = %llu\n", valor_fib , armazena);
        }
    }
   


    return 0;
}

unsigned long long fibonnaci(int n){
unsigned long long soma_fibonnaci;
unsigned long long primeiro_termo = 0;
unsigned long long segundo_termo = 1;
    

    if(n == 0){
        return primeiro_termo;
    } else if(n == 1){
        return segundo_termo;
    }else{
        for (int i = 2; i <= n; i++){
            soma_fibonnaci = primeiro_termo + segundo_termo;
            primeiro_termo = segundo_termo;
            segundo_termo = soma_fibonnaci;
        }
        return soma_fibonnaci;
    }

}