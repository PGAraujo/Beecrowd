#include <stdio.h>
 
int main() {
 
    int i,contador;

    i = 2;

    while (i <= 100){
        if(i % 2 == 0){
            printf("%d\n",i);
            i += 1;
        }
        else{
            i +=1;
            continue;
        }
    }
    return 0;
}