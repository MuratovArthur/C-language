#include <stdio.h>
#include <math.h>

int main(){
   int n;
   double x;
   double temp =1;
   double sum = 0;
   printf("n: ");
   scanf("%d", &n);
   printf("x: ");
   scanf("%lf", &x);
   for(int i=0; i<n;i++){
        temp*=x;
        sum+=temp;
   }
   printf("%2.2f\n", sum);
}