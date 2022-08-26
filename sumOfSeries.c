/*Get an integer value n, and a double value x from the user,
and then calculate the value of the series x1 + x2 + x3 + … + xn.
Do this without using nested loops, or the pow(x, i) function
from the math.h library (that’s what makes this challenging!*/

#include <stdio.h>

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