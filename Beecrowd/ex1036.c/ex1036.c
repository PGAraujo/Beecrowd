#include <stdio.h>
#include <math.h>
int main() {
 
   double a,b,c;
   double baskara1;
   double baskara2;
   double delta;

   scanf("%lf %lf %lf", &a,&b,&c);

   delta = (b*b) - (4 * a * c);
   if (delta < 0 || a == 0){
    printf("Impossivel calcular\n");
   }
   else{
    baskara1 = (-b + sqrt(delta))/ (2 * a);
    baskara2 = (-b - sqrt(delta))/ (2 * a);
    printf("R1 = %.5lf\n", baskara1);
    printf("R2 = %.5lf\n", baskara2);
   }

   


    return 0;
}